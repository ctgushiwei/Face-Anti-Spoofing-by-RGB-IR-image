code、data、model coming soon!!

# Face-Anti-Spoofing-by-RGB-IR-image
Trained model and part data of face anti-spoofing with a single RGB frame,the model is trained by caffe.

We have designed a set of network and methods to collect a set of RGB images and infrared images to complete the anti-counterfeiting of printed photos. After multi scenario testing and verification, it has reached the commercial level standard.
#1.code

   step1:crop face images with rgb images and infrared images at the same time.
   
   step2:The RGB image and the near-infrared image are sent to the judgment code respectively.The code determines whether it is a color            photo or a grayscale photo according to the RGB image.
   
   step3：Set judgment thresholds in different modules, and then judge whether they are real or fake.

#2.data

   Our training data is mainly collected by ourselves through different equipment.

#3.model

  （1） Our's model is trained by caffe.This judgment process is mainly composed of four modules. 
  
  （2）The first model mainly determines whether it is color or grayscale, and mainly uses croped and aligned RGB face images to judge.
  
  （3） If the first module is passed and the second module is entered, the second model mainly determines the color print image by the infrared image. But curved faces are not very good to judge with this module.
  
  （4） The third model mainly collects a little curved face image, and then trains the model to determine whether it is a real person or a dummy.
  
  （5）Finally, we will also transfer the RGB image to the HSV color space, and then select a face area to determine whether there is color cast and insufficiently saturated print photos.
