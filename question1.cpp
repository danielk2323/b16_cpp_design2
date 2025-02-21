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
    
    void setPixels(int x, int y, unsigned char pixel)
    {
        pixels[y][x] = pixel;
    }

    unsigned char getPixel(int x, int y)
    {
        return pixels[y][x];
    }
}