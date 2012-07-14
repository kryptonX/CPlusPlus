// Public Domain
// Note: HAVE FUN WITH THIS!

// Original author: KryptonX

#include <iostream>
#include <cstdlib>

#ifndef PLUS_VALUES
#define PHEIGHT (0x07)
#define PWIDTH (0x07)
#endif

#ifndef C_VALUES
#define CHEIGHT (0x07)
#define CWIDTH (0x07)
#endif

const char BLANK = ' ';
const char PIX = '+';
const char *PIXSTR = "cpp";

void printcpp()
{
            int spaceindex;   
            for (int p = 0; p <= PHEIGHT; p++)
            {              
                spaceindex = 0;  
                if (p < 4) {
                      for (int i = 7; i > p; i-- && spaceindex++)
                          std::cout << ' ';
                      std::cout << PIXSTR;
                      spaceindex++;                      
                } 
                else    
                {
                    for (int i = 1; i <= p; i++ && spaceindex++)
                          std::cout << ' ';
                      std::cout << PIXSTR;
                      spaceindex++;    
                }     
                if (spaceindex > 2)        
                for (int i = 0; i <= 11 - spaceindex; i++)
                    std::cout <<  ' ';           
                static signed int side;
                side = PWIDTH;
                do {
                   if ((p == ((int)PHEIGHT / 2) || p == ((int)PHEIGHT / 2) + 1)
                   && side != ((int)PHEIGHT / 2) && side != ((int)PHEIGHT / 2) + 1)
                      std::cout << PIX;
                   else if (side == ((int)PHEIGHT / 2) || side == ((int)PHEIGHT / 2) + 1)
                      std::cout << PIX;
                   else std::cout << BLANK;  
                   --side;
                } while (side >= 0);
                std::cout << "  ";
                side = PWIDTH;
                do {
                   if ((p == ((int)PHEIGHT / 2) || p == ((int)PHEIGHT / 2) + 1)
                   && side != ((int)PHEIGHT / 2) && side != ((int)PHEIGHT / 2) + 1)
                      std::cout << PIX;
                   else if (side == ((int)PHEIGHT / 2) || side == ((int)PHEIGHT / 2) + 1)
                      std::cout << PIX;
                   else std::cout << BLANK;  
                   --side;
                } while (side >= 0);
                std::cout << std::endl;
            }
}

int main()
{
    printcpp();
    std::cout << "\n===========================================\n" <<
              "\t\tstd::cout << \"Hello, Better World!\" << std::endl;\n\n-- KryptonX\n" << std::endl;
    std::cin.ignore();
    return 0;
}

