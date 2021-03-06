#ifndef _CONFIG_H
#define _CONFIG_H


//ADC configuration
#define ADC_CHAN_MSK      0b0000000010000111 //used AD channels bit mask (0,1,2,3,4,7,9)
#define ADC_CHAN_CNT      4            //number of used channels)
#define ADC_OVRSAMPL      16        //oversampling multiplier
#define ADC_CALLBACK      adc_ready //callback function ()

//SM4 configuration
#define SM4_DEFDELAY      500       //default step delay [us]


#endif //_CONFIG_H
