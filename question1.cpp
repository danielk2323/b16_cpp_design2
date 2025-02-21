#include <iostream>
#include <vector>

class Image
{
    private:
    int width, height;
    std::vector<std::vector<unsigned char>> pixels;

    public:
    Image(int w, int h):
    width(w), height(h), pixels(h, std::vector<unsigned char>(w,0)){}

    int getWidth() const
    {
        return width;
    }

    int getHeight() const
    {
        return height;
    }
    
    void setPixel(int x, int y, unsigned char pixel)
    {
        pixels[y][x] = pixel;
    }

    unsigned char getPixel(int x, int y)
    {
        return pixels[y][x];
    }
};

int main()
{
    Image img(10, 10);

    // Set some pixels
    img.setPixel(0, 0, 255);
    img.setPixel(1, 1, 128);
    img.setPixel(2, 2, 64);

    // Get and print some pixels
    std::cout << "Pixel at (0,0): " << static_cast<int>(img.getPixel(0, 0)) << std::endl;
    std::cout << "Pixel at (1,1): " << static_cast<int>(img.getPixel(1, 1)) << std::endl;
    std::cout << "Pixel at (2,2): " << static_cast<int>(img.getPixel(2, 2)) << std::endl;

    // Print image dimensions
    std::cout << "Image width: " << img.getWidth() << std::endl;
    std::cout << "Image height: " << img.getHeight() << std::endl;

    return 0;
}