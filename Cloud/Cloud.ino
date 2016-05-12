/*
                                                                                                                                  _,o9   
                                                                                                                                ,'       
    `7MM"""YMM  `7MN.   `7MF'MMP""MM""YMM  .M"""bgd      .M"""bgd   .g8""8q. `7MMF'   `7MF'`7MM"""YMM `7MM"""YMM `7MMF'      `7MM"""YMM  
      MM    `7    MMN.    M  P'   MM   `7 ,MI    "Y     ,MI    "Y .dP'    `YM. MM       M    MM    `7   MM    `7   MM          MM    `7  
      MM   d      M YMb   M       MM      `MMb.         `MMb.     dM'      `MM MM       M    MM   d     MM   d     MM          MM   d    
      MMmmMM      M  `MN. M       MM        `YMMNq.       `YMMNq. MM        MM MM       M    MM""MM     MM""MM     MM          MMmmMM    
      MM   Y  ,   M   `MM.M       MM      .     `MM     .     `MM MM.      ,MP MM       M    MM   Y     MM   Y     MM      ,   MM   Y  , 
      MM     ,M   M     YMM       MM      Mb     dM     Mb     dM `Mb.    ,dP' YM.     ,M    MM         MM         MM     ,M   MM     ,M 
    .JMMmmmmMMM .JML.    YM     .JMML.    P"Ybmmd"      P"Ybmmd"    `"bmmd"'    `bmmmmd"'  .JMML.     .JMML.     .JMMmmmmMMM .JMMmmmmMMM 
                                                                                                                  
                   
                                                   ```.......```                                                    
                                           `--///+++:.-..://++//+:::::///////-````                                  
                                       `:/sso+/++yyoso+:/+/:/o++ssoooso/ss+oso+o+/:-.`````                          
                                    `-/o+so++++o::++++oso++o++os+//o++oooo+/:-:/+ooo+osoo+/:-.                      
                                 `..:y+//++/:..``./+:://oooso////os+syysooysyyyy+//--://sssys+/-                    
                               `--`-:+.syo+o+/::/++//+++oo+o+::osyyyyyssyo+o/::+syso+//:-+syss+--...                
                        `.-----+.````.:+//++ys++/oysoos++o+///+/--::+oossyyo++os++o+oos//+o+++:.````.`              
                      `-o/.``./..```````.:/++//+/++++ooo+++-.+++ooysso+syysssyyo/so+++o++:::.````````.--`           
                     -/os:``:+..````````````..-.-////osyssooyo//os+/++o/++/oysosoo/::::-..`````````````-/--.        
                     ---..+s-`.````````````````````-:/://+/os+//----.``::+++//-.``````````````````````.`:+``..`     
                    .:.``-y/````````````````````````-----::/:-----.```````````````````````````````````.`.y:``.::`   
                   --`.`.+-````````````````````````````````````````````````````````````````.````````.```-ss.````::  
                  --..`-+s+---..--.````````````````````````````````````````````````````````````````....:o:``:````-- 
                 .-`-/+syys+/-.-:---.`````.....````````````````````````````````````````````.-...----:-::````.+://.: 
                 .-`-o::ssysooysoo:``.+:---.----...-----````````````````````````````.-///++/.```````.`.``.``.:syss/ 
                  .-`-o...-os//soo.``-o.://.-````````...so+-:---:.`````..-:::/+/:/+o+:.```.os`-:../s++o+++/+so/+ys- 
                   `--`````:..-o-..-+:-+y+so+++sss++++/..o+:y+...-///oo.::+/soossys+///:.``/+ossoyyossysooo/.:+o+:` 
                      .:::----```-+o.-osysyo+osooooo+++:`o/oso/+--.`-os`````-./sso/-.``````/yyyyso/://-://+oo/-.`   
                         `.:y/::.```./+o+yso++/ssosoooo//osyoso+o+/--`.````.``.``...`````..s+/--.::/+o++s+-.`       
                            ss+....--.```:///+oo+++o++o++/:.::/s+oso-.:--:/..```````````+y+//+oso++ysys/-.          
                            /o/-````.//::::-.````.``..```..---..-::/os+o+:...`..-.....-+ysys+/:.```:-:-//           
                            -o+:`````+s+-``.-:--------....````.----.```.````.---.```````..---```````.:+/-           
                            `/+/.````oss+`````````````````.:```````......--..``-:+s+`````-/+s-``````./+o.           
                            `///:````/yo-```````-o:```````.:-.```````:++:``````+yd/o`````//oo.``````:/oy            
                             /++:.```-s:-```````.+-````````.:-``````-:://`````:+++//````-/+/s```````-os/            
                             :+:/:```.s--```````.o:````````./.`````-/:::+`````-/+:+-````.:/:/```````:s/-            
                             .+/:-```.y+-.```````o:.````````+.```````-:/+`````::::+.````.:/o:``````.+o:`            
                             `/o/:````s//:```````s/.````````/-```````:+++````.:/+-+`````:/+d.``````/+::             
                              /+/:````o/:-```````o:-```````./-```````-+:/````.:::++`````.:+y``````-//.-             
                              :h/-.```+:::```````s+:```````.+-````````///````.-://-`````-/o+``````.+o/.             
                              .ho/-```+:/:.``````o::.``````.+.```````.:+/```./++o+-````-://:`````-/o/:`             
                               sho/.``/+//-``````o/--```````:.```````./o:```.+os:/.```.::+/-````.+o+//              
                               `-+sys+:-::-``````+/.-.`````.:-```````./+:```.:/+/+````-//oo.```./oo/-.              
                                   `--:///+/-````-//:-````..--```````//-.```-/+o/````./+/:.``-:/:-.                 
                                          ``.---::/+oo+++/::--:+++++//:----:/+/:.....-----....`                     
                                                    ``.---........-:------............
                                                      
                                   
                                                   A cloud of clouds; collective noun                             
                                                                                                    
 */

#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <Adafruit_NeoPixel.h>

// Configuration constants
#define WIFI_SSID "ENTS"
#define WIFI_PSK "hacktheplanet"
IPAddress MULTICAST_IP(225, 225, 225, 225);
#define MULTICAST_PORT 2525
#define WIFI_WAIT_MAX 30000 // 30 seconds

// General constants
#define DEBUG_SERIAL Serial
#define LED_PIN D4
#define PIXEL_PIN D3
#define NUM_PIXELS 170 // 170 maximum
#define MAX_MODES 7

// State variables
bool startedOk = false;
int currentMode = 0;
bool justChangedMode = true;
long lastModeBroadcast = 0;

// Operational variables
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);
byte packetBuffer[512];
WiFiUDP udp;

// Protocol flags
#define PROTOCOL_CHANGE_MODE 0x01
#define PROTOCOL_INCREMENT_MODE 0x02
#define PROTOCOL_PARAMS_COLOR 0xA0

// Structs for states
struct {
  int red;
  int green;
  int blue;
  bool updated;
} colorState;

// define prototypes
void pingColorMode();
void pingOffMode();

void setup() {
  // debugging
  DEBUG_SERIAL.begin(9600);

  // general IO setup
  pinMode(LED_PIN, OUTPUT);
  
  // connect to wifi
  DEBUG_SERIAL.println("Connecting to wifi...");
  WiFi.begin(WIFI_SSID, WIFI_PSK);

  long wifiStart = millis();
  while(WiFi.status() != WL_CONNECTED){
    DEBUG_SERIAL.println("Waiting for connection to wifi...");
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    if(millis() - wifiStart > WIFI_WAIT_MAX){
      DEBUG_SERIAL.println("Failed to connect to wifi, cancelling startup");
      startedOk = false;
      return;
    }
  }
  DEBUG_SERIAL.println("Connected to wifi");
  DEBUG_SERIAL.print("IP: ");
  DEBUG_SERIAL.println(WiFi.localIP());

  // join multicast
  udp.beginMulticast(WiFi.localIP(), MULTICAST_IP, MULTICAST_PORT);

  // setup pixel strip
  strip.begin();
  for(int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i, strip.Color(0, 0, 0));
  }
  strip.show();

  digitalWrite(LED_PIN, HIGH);
  randomSeed(23242434);
  startedOk = true;
}

void loop() {
  // Warning loop
  if(!startedOk){
    while(true){
      digitalWrite(LED_PIN, LOW);
      delay(50);
      digitalWrite(LED_PIN, HIGH);
      delay(50);
    }
  }

  // check for updates from network
  int packetSize = udp.parsePacket();
  if(packetSize) {
    DEBUG_SERIAL.println("Received packet...");
    DEBUG_SERIAL.println("  Length: " + String(packetSize));
    DEBUG_SERIAL.print("  From: ");
    DEBUG_SERIAL.println(udp.remoteIP());
    DEBUG_SERIAL.println("  Port: " + String(udp.remotePort()));

    int len = udp.read(packetBuffer, 255);
    if(len > 0) {
      packetBuffer[len] = 0;
    }

    if(packetBuffer[0] == PROTOCOL_CHANGE_MODE){
      int newMode = (int)packetBuffer[1];
      if(newMode >= 0 && newMode < MAX_MODES && newMode != currentMode){
        currentMode = newMode;
        justChangedMode = true;
      }
    }else if(packetBuffer[0] == PROTOCOL_INCREMENT_MODE){
      currentMode++;
      if(currentMode > MAX_MODES){
        currentMode = 0;
      }
      justChangedMode = true;
    }else if(packetBuffer[0] == PROTOCOL_PARAMS_COLOR){
      colorState.red = (int)packetBuffer[1];
      colorState.green = (int)packetBuffer[2];
      colorState.blue = (int)packetBuffer[3];
      colorState.updated = true;
    } // TODO: Other modes
  }

  if(millis() - lastModeBroadcast >= 1000){
    udp.beginPacketMulticast(MULTICAST_IP, MULTICAST_PORT, WiFi.localIP(), 1200);
    udp.write(PROTOCOL_CHANGE_MODE);
    udp.write((byte)currentMode);
    udp.endPacket();
    lastModeBroadcast = millis();
  }

  // do polling updates on modes
  switch(currentMode) {
    case 0: pingColorMode(); break;
    //case 1: pingThunderMode(); break;
    //case 2: pingSunriseMode(); break;
    //case 3: pingSunsetMode(); break;
    //case 4: pingRainbowMode(); break;
    //case 5: pingDiscoMode(); break;
    case 6: pingOffMode(); break;
  }

  justChangedMode = false;
}

// CHECK FUNCTIONS
// =======================================================
void pingColorMode(){
  if(colorState.updated || justChangedMode){
    for(int i = 0; i < strip.numPixels(); i++){
      strip.setPixelColor(i,  strip.Color(colorState.red, colorState.green, colorState.blue));
    }
    strip.show();
    colorState.updated = false; // so we don't constantly update the strip
  }
}

void pingOffMode(){
  if(justChangedMode){
    for(int i = 0; i < strip.numPixels(); i++){
      strip.setPixelColor(i, strip.Color(0, 0, 0));
    }
    strip.show();
  }
}

