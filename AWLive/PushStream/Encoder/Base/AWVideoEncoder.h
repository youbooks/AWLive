/*
 copyright 2016 wanghongyu.
 The project page：https://github.com/hardman/AWLive
 My blog page: http://blog.csdn.net/hard_man/
 */

/*
 视频编码器基类，只声明接口，和一些公共转换数据函数。
 */

#import "AWEncoder.h"

@interface AWVideoEncoder : AWEncoder

@property (nonatomic, strong) AWVideoConfig *videoConfig;

//编码
-(aw_flv_video_tag *) encodeYUVDataToFlvTag:(NSData *)yuvData;

-(aw_flv_video_tag *) encodeVideoSampleBufToFlvTag:(CMSampleBufferRef)videoSample;

//根据flv，h264，aac协议，提供首帧需要发送的tag
//创建sps pps
-(aw_flv_video_tag *) createSpsPpsFlvTag;

//转换
-(NSData *) convertVideoSmapleBufferToYuvData:(CMSampleBufferRef) videoSample;


@end
