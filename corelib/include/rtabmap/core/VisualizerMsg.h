#ifndef VISUALIZERMSG_H_
#define VISUALIZERMSG_H_

#include <opencv2/core/core.hpp>

class VisualizerMsg {
private:
    cv::Mat image_;
    cv::Mat depth_;
    cv::Mat mask_;
    std::vector<cv::KeyPoint> staticKeypoints_;
    std::vector<cv::KeyPoint> dynamicKeypoints_;

public:
    VisualizerMsg() {
        image_ = cv::Mat();
        depth_ = cv::Mat();
        mask_ = cv::Mat();
        staticKeypoints_ = std::vector<cv::KeyPoint>();
        dynamicKeypoints_ = std::vector<cv::KeyPoint>();
    }

    VisualizerMsg(cv::Mat rgb, cv::Mat depth, cv::Mat mask, std::vector<cv::KeyPoint> staticKeypoints, std::vector<cv::KeyPoint> dynamicKeypoints) {
        image_ = rgb;
        depth_ = depth;
        mask_ = mask;
        staticKeypoints_ = staticKeypoints;
        dynamicKeypoints_ = dynamicKeypoints;
    }

    void setImage(cv::Mat image) {image_ = image;}
    void setDepth(cv::Mat depth) {depth_ = depth;}
    void setMask(cv::Mat mask) {mask_ = mask;}
    void setStaticKeypoints(std::vector<cv::KeyPoint> staticKeypoints) {staticKeypoints_ = staticKeypoints;}
    void setDynamicKeypoints(std::vector<cv::KeyPoint> dynamicKeypoints) {dynamicKeypoints_ = dynamicKeypoints;}

    cv::Mat image() {return image_;}
    cv::Mat depth() {return depth_;}
    cv::Mat mask() {return mask_;}
    std::vector<cv::KeyPoint> staticKeypoints() {return staticKeypoints_;}
    std::vector<cv::KeyPoint> dynamicKeypoints() {return dynamicKeypoints_;}
};

#endif // VISUALIZERMSG_H_
