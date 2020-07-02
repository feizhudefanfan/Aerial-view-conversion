#pragma once
#if defined(_DLL_EXPORTS) // inside DLL
#   define DLL_API   __declspec(dllexport)
#else // outside DLL
#   define DLL_API   __declspec(dllimport)
#endif  // XYZLIBRARY_EXPORT
#include <opencv2\opencv.hpp>
#include <opencv2\calib3d.hpp>
cv::Point2f corners[4];			//ԭͼ�ĸ���
cv::Point2f corners_trans[4];	//��͸��ͼ�ĸ���


void mouse_callback(int event, int x, int y, int flags, void* param);

extern "C" DLL_API int demo(std::string _filePath);