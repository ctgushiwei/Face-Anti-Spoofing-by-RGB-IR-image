bool getFaceAntiStatus(cv::Mat srcRGBImg,cv::Mat srcIRImg)
{

//step1:
   cv::Rect rect;
   rect.x=100;
   rect.y=100;
   rect.height=rect.width=50;
   float score_s_channel=0.0f;
   cv::Mat hsvMat;
   cv::cvtColor(srcRGBImg,hsvMat,CV_BGR2HSV);
   
   std::vector<cv::Mat> hsMat;
   cv::split(hsvMat,hsMat);
   cv::Scalar sum=cv::sum(hsMat[1](rect));
   score_s_channel=sum[0]/(float)(rect.width*rect.height);
   
   if(score_s_channel<10.0f)
    return false;//gray image or color not saturation
   
}
