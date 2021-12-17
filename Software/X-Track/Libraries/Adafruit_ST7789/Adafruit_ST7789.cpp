#include "Adafruit_ST7789.h"
#include "SPI.h"

#define TFT_SPI    SPI
#define TFT_WIDTH  240
#define TFT_HEIGHT 240

#if defined(__STM32__)
#define TFT_CS_SET      GPIO_HIGH(csport,cspinmask)
#define TFT_DC_SET      GPIO_HIGH(dcport,dcpinmask)
#define TFT_SCK_SET     GPIO_HIGH(sckport,sckpinmask)
#define TFT_MOSI_SET    GPIO_HIGH(mosiport,mosipinmask)

#define TFT_CS_CLR      GPIO_LOW(csport,cspinmask)
#define TFT_DC_CLR      GPIO_LOW(dcport,dcpinmask)
#define TFT_SCK_CLR     GPIO_LOW(sckport,sckpinmask)
#define TFT_MOSI_CLR    GPIO_LOW(mosiport,mosipinmask)
#else
#define TFT_CS_SET      digitalWrite(CS,HIGH)
#define TFT_DC_SET      digitalWrite(DC,HIGH)
#define TFT_SCK_SET     digitalWrite(SCK,HIGH)
#define TFT_MOSI_SET    digitalWrite(MOSI,HIGH)

#define TFT_CS_CLR      digitalWrite(CS,LOW)
#define TFT_DC_CLR      digitalWrite(DC,LOW)
#define TFT_SCK_CLR     digitalWrite(SCK,LOW)
#define TFT_MOSI_CLR    digitalWrite(MOSI,LOW)
#endif


Adafruit_ST7789::Adafruit_ST7789(uint8_t cs, uint8_t dc, uint8_t rst)
    : Adafruit_GFX(TFT_WIDTH, TFT_HEIGHT)
{
    CS = cs;
    DC = dc;
    RST = rst;

#if defined(__STM32__)
    csport = digitalPinToPort(CS);
    cspinmask = digitalPinToBitMask(CS);
    dcport = digitalPinToPort(DC);
    dcpinmask = digitalPinToBitMask(DC);
#endif

    hwSPI = true;
}

Adafruit_ST7789::Adafruit_ST7789(uint8_t cs, uint8_t dc, uint8_t rst, uint8_t clk, uint8_t mosi)
    : Adafruit_GFX(TFT_WIDTH, TFT_HEIGHT)
{
    CS = cs;
    DC = dc;
    RST = rst;
    SCK = clk;
    MOSI = mosi;

#if defined(__STM32__)
    csport = digitalPinToPort(CS);
    cspinmask = digitalPinToBitMask(CS);
    dcport = digitalPinToPort(DC);
    dcpinmask = digitalPinToBitMask(DC);
    sckport = digitalPinToPort(SCK);
    sckpinmask = digitalPinToBitMask(SCK);
    mosiport = digitalPinToPort(MOSI);
    mosipinmask = digitalPinToBitMask(MOSI);
#endif

    hwSPI = false;
}

void Adafruit_ST7789::begin()
{
    if(hwSPI)
    {
        TFT_SPI.begin();
        TFT_SPI.setClock(200000000);
    }
    else
    {
        pinMode(SCK, OUTPUT);
        pinMode(MOSI, OUTPUT);
    }

    pinMode(CS, OUTPUT);
    pinMode(DC, OUTPUT);
    pinMode(RST, OUTPUT);

    digitalWrite(CS, HIGH);

    digitalWrite(RST, LOW);
    delay(100);
    digitalWrite(RST, HIGH);
    delay(100);

    writeCommand(0x11); //Sleep out
    delay(120);

    //setRotation(0);

    writeCommand(0xfe);
		writeCommand(0xef);
    
		writeCommand(0xeb);
		writeData(0x14);

    writeCommand(0x84);
    writeData(0x40);
		
		writeCommand(0x85);
    writeData(0xff);
		
		writeCommand(0x86);
		writeData(0xff);
		
	writeCommand(0x87);			
	writeData(0xFF);
	writeCommand(0x8E);			
	writeData(0xFF); 

	writeCommand(0x8F);			
	writeData(0xFF); 

	writeCommand(0x88);			
	writeData(0x0A);

	writeCommand(0x89);			
	writeData(0x21); //2data: 0x23    1data: 0x21

	writeCommand(0x8A);			
	writeData(0x00); 

	writeCommand(0x8B);			
	writeData(0x80); 

	writeCommand(0x8C);			
	writeData(0x01); 

	writeCommand(0x8D);			
	writeData(0x01); 

  writeCommand(0xB6);//FS			
  writeData(0x00); //FS
  writeData(0x60); //FS

	writeCommand(0x36);			
	writeData(0x80);//88

	writeCommand(0x3A);			
	writeData(0x05); 


	writeCommand(0x90);			
	writeData(0x08);
	writeData(0x08);
	writeData(0x08);
	writeData(0x08); 

	writeCommand(0xBD);			
	writeData(0x06);
	
	writeCommand(0xBC);			
	writeData(0x00);	

	writeCommand(0xFF);			
	writeData(0x60);
	writeData(0x01);
	writeData(0x04);

	writeCommand(0xC3);			
	writeData(0x13);
	writeCommand(0xC4);			
	writeData(0x13);

	writeCommand(0xC9);			
	writeData(0x22);

	writeCommand(0xBE);			
	writeData(0x11); 

	writeCommand(0xE1);			
	writeData(0x10);
	writeData(0x0E);

	writeCommand(0xDF);			
	writeData(0x21);
	writeData(0x0c);
	writeData(0x02);

	writeCommand(0xF0);   
  writeData(0x45);
  writeData(0x09);
  writeData(0x08);
  writeData(0x08);
  writeData(0x26);
 	writeData(0x2A);

 	writeCommand(0xF1);    
 	writeData(0x43);
 	writeData(0x70);
 	writeData(0x72);
 	writeData(0x36);
 	writeData(0x37);  
 	writeData(0x6F);


 	writeCommand(0xF2);   
 	writeData(0x45);
 	writeData(0x09);
 	writeData(0x08);
 	writeData(0x08);
 	writeData(0x26);
 	writeData(0x2A);

 	writeCommand(0xF3);   
 	writeData(0x43);
 	writeData(0x70);
 	writeData(0x72);
 	writeData(0x36);
 	writeData(0x37); 
 	writeData(0x6F);

	writeCommand(0xED);	
	writeData(0x1B); 
	writeData(0x0B); 

	writeCommand(0xAE);			
	writeData(0x77);
	
	writeCommand(0xCD);			
	writeData(0x63);		


	writeCommand(0x70);			
	writeData(0x07);
	writeData(0x07);
	writeData(0x04);
	writeData(0x0E); 
	writeData(0x0F); 
	writeData(0x09);
	writeData(0x07);
	writeData(0x08);
	writeData(0x03);

	writeCommand(0xE8);			
	writeData(0x34);

	writeCommand(0x62);			
	writeData(0x18);
	writeData(0x0D);
	writeData(0x71);
	writeData(0xED);
	writeData(0x70); 
	writeData(0x70);
	writeData(0x18);
	writeData(0x0F);
	writeData(0x71);
	writeData(0xEF);
	writeData(0x70); 
	writeData(0x70);

	writeCommand(0x63);			
	writeData(0x18);
	writeData(0x11);
	writeData(0x71);
	writeData(0xF1);
	writeData(0x70); 
	writeData(0x70);
	writeData(0x18);
	writeData(0x13);
	writeData(0x71);
	writeData(0xF3);
	writeData(0x70); 
	writeData(0x70);

	writeCommand(0x64);			
	writeData(0x28);
	writeData(0x29);
	writeData(0xF1);
	writeData(0x01);
	writeData(0xF1);
	writeData(0x00);
	writeData(0x07);
       
  writeCommand(0x66); //FS
	writeData(0x3C);
	writeData(0x00);
	writeData(0x98);
	writeData(0x10);
	writeData(0x32);
	writeData(0x45);
	writeData(0x01);
	writeData(0x00);
	writeData(0x00);
	writeData(0x00);

	writeCommand(0x67);
	writeData(0x00);
	writeData(0x3C);
	writeData(0x00);
	writeData(0x00);
	writeData(0x00);
	writeData(0x10);
	writeData(0x54);
	writeData(0x67);
	writeData(0x45);
	writeData(0xcd);//FS
             

	writeCommand(0x74);			
	writeData(0x10);	
	writeData(0x85);	
	writeData(0x80);
	writeData(0x00); 
	writeData(0x00); 
	writeData(0x4E);
	writeData(0x00);					
	
  writeCommand(0x98);			
	writeData(0x3e);
	writeData(0x07);



	writeCommand(0x35);	
  writeData(0x00); 
	writeCommand(0x21);
	delay(120);
		
	writeCommand(0x11);
	delay(120);
	writeCommand(0x29);
	delay(120);
	//writeCommand(0x2C);		
}

void Adafruit_ST7789::spiWrite(uint8_t data)
{
    for(uint8_t i = 0; i < 8; i++)
    {
        TFT_SCK_CLR;
        (data & 0x80) ? TFT_MOSI_SET : TFT_MOSI_CLR;
        TFT_SCK_SET;
        data <<= 1;
    }
}

void Adafruit_ST7789::writeCommand(uint8_t cmd)
{
    TFT_CS_CLR;
    TFT_DC_CLR;
    if(hwSPI)
        TFT_SPI.transfer(cmd);
    else
        spiWrite(cmd);
    TFT_CS_SET;
}

void Adafruit_ST7789::writeData16(uint16_t data)
{
    TFT_CS_CLR;
    TFT_DC_SET;
    if(hwSPI)
    {
        TFT_SPI.transfer(data >> 8);
        TFT_SPI.transfer(data);
    }
    else
    {
        spiWrite(data >> 8);
        spiWrite(data);
    }
    TFT_CS_SET;
}

void Adafruit_ST7789::writeData(uint8_t data)
{
    TFT_CS_CLR;
    TFT_DC_SET;
    if(hwSPI)
    {
        TFT_SPI.transfer(data);
    }
    else
    {
        spiWrite(data);
    }
    TFT_CS_SET;
}

void Adafruit_ST7789::setRotation(uint8_t r)
{
    rotation = r % 4;
    writeCommand(0x36);
    switch(rotation)
    {
    case 0:
        _width = TFT_WIDTH;
        _height = TFT_HEIGHT;

        writeData(0x00);
        break;

    case 1:
        _width = TFT_HEIGHT;
        _height = TFT_WIDTH;

        writeData(0xC0);
        break;

    case 2:
        _width = TFT_WIDTH;
        _height = TFT_HEIGHT;

        writeData(0x70);
        break;

    case 3:
        _width = TFT_HEIGHT;
        _height = TFT_WIDTH;

        writeData(0xA0);
        break;
    }
}

void Adafruit_ST7789::setAddrWindow(int16_t x0, int16_t y0, int16_t x1, int16_t y1)
{
    switch(rotation)
    {
    case 0:
        writeCommand(0x2A);
        writeData16(x0);
        writeData16(x1);

        writeCommand(0x2B);
        writeData16(y0);
        writeData16(y1);
        break;
    case 1:
        writeCommand(0x2A);
        writeData16(x0);
        writeData16(x1);

        writeCommand(0x2B);
        writeData16(y0 + 80);
        writeData16(y1 + 80);
        break;
    case 2:
        writeCommand(0x2A);
        writeData16(x0);
        writeData16(x1);

        writeCommand(0x2B);
        writeData16(y0);
        writeData16(y1);
        break;
    case 3:
        writeCommand(0x2A);
        writeData16(x0 + 80);
        writeData16(x1 + 80);

        writeCommand(0x2B);
        writeData16(y0);
        writeData16(y1);
        break;

    }

    writeCommand(0x2C);
}

void Adafruit_ST7789::setCursor(int16_t x, int16_t y)
{
    cursor_x = x;
    cursor_y = y;
    if((x < 0) || (x >= _width) || (y < 0) || (y >= _height)) return;
    setAddrWindow(x, y, x, y);
}

void Adafruit_ST7789::drawPixel(int16_t x, int16_t y, uint16_t color)
{
    if((x < 0) || (x >= _width) || (y < 0) || (y >= _height)) return;
    setAddrWindow(x, y, x, y);
    writeData16(color);
}

void Adafruit_ST7789::drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color)
{
    // Rudimentary clipping
    if((x >= _width) || (y >= _height) || h < 1) return;
    if((y + h - 1) >= _height) h = _height - y;
    if(x < 0) x = 0;
    if(y < 0) y = 0;

    setAddrWindow(x, y, x, y + h - 1);

    while (h--)
        writeData16(color);
}

void Adafruit_ST7789::drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)
{
    // Rudimentary clipping
    if((x >= _width) || (y >= _height) || w < 1) return;
    if((x + w - 1) >= _width)  w = _width - x;
    if(x < 0) x = 0;
    if(y < 0) y = 0;

    setAddrWindow(x, y, x + w - 1, y);

    while (w--)
        writeData16(color);
}

void Adafruit_ST7789::drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, int16_t w, int16_t h)
{
    if((x >= _width) || (y >= _height)) return;

    int16_t actual_cursor_x = x;
    int16_t actual_cursor_y = y;
    int16_t actual_cursor_x1 = x + w - 1;
    int16_t actual_cursor_y1 = y + h - 1;

    if(actual_cursor_x < 0)
    {
        actual_cursor_x = 0;
    }
    else if(actual_cursor_x >= _width)
    {
        actual_cursor_x = _width - 1;
    }

    if(actual_cursor_y < 0)
    {
        actual_cursor_y = 0;
    }
    else if(actual_cursor_y >= _height)
    {
        actual_cursor_y = _height - 1;
    }

    if(actual_cursor_x1 < 0)
    {
        actual_cursor_x1 = 0;
    }
    else if(actual_cursor_x1 >= _width)
    {
        actual_cursor_x1 = _width - 1;
    }

    if(actual_cursor_y1 < 0)
    {
        actual_cursor_y1 = 0;
    }
    else if(actual_cursor_y1 >= _height)
    {
        actual_cursor_y1 = _height - 1;
    }

    setAddrWindow(actual_cursor_x, actual_cursor_y, actual_cursor_x1, actual_cursor_y1);

    for(int16_t Y = 0; Y < h; Y++)
    {
        for(int16_t X = 0; X < w; X++)
        {
            int16_t index = X + Y * w;
            int16_t actualX = x + X;
            int16_t actualY = y + Y;
            if(actualX >= 0 && actualX < _width && actualY >= 0 && actualY < _height)
            {
                writeData16(bitmap[index]);
            }
        }
    }
}

#define SPIx SPI1
#define SPI_I2S_GET_FLAG(SPI_I2S_FLAG) (SPIx->STS & SPI_I2S_FLAG)
#define SPI_I2S_TXDATA(data)           (SPIx->DT = data)
#define SPI_IS_TXE()                   (SPI_I2S_GET_FLAG(SPI_STS_TE))
#define SPI_IS_BUSY()                  (SPI_I2S_GET_FLAG(SPI_STS_BSY))

void Adafruit_ST7789::fillScreen(uint16_t color)
{
    setAddrWindow(0, 0, _width - 1, _height - 1);
    uint32_t size = _width * _height;
    if(hwSPI)
    {
        TFT_CS_CLR;
        TFT_DC_SET;
        while(size--)
        {
            while (!SPI_IS_TXE());
            SPI_I2S_TXDATA(color >> 8);
            while (!SPI_IS_TXE());
            SPI_I2S_TXDATA(color);
        }
        while (!SPI_IS_TXE());
        while (SPI_IS_BUSY());
        TFT_CS_SET;
    }
    else
    {
        for(uint32_t i = 0; i < size; i++)
        {
            writeData16(color);
        }
    }
}

void Adafruit_ST7789::drawFastRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, int16_t w, int16_t h)
{
    if(!hwSPI)
        return;

    setAddrWindow(x, y, x + w - 1, y + h - 1);
    uint32_t size = w * h;

    if(hwSPI)
    {
        TFT_CS_CLR;
        TFT_DC_SET;
        while(size--)
        {
            while (!SPI_IS_TXE());
            SPI_I2S_TXDATA(*bitmap >> 8);
            while (!SPI_IS_TXE());
            SPI_I2S_TXDATA(*bitmap++);
        }
        while (!SPI_IS_TXE());
        while (SPI_IS_BUSY());
        TFT_CS_SET;
    }
}
