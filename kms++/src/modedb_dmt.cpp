/* Generated from DMTr1 v13.pdf */

#include <kms++/modedb.h>

#include <xf86drm.h>

namespace kms
{

#define DIV_ROUND(n, d) (((n) + (d) / 2) / (d))

// hd, hss, hse, ht, vd, vss, vse, vt

#define DRM_MODE(nm, c, hact, hfp, hsw, hbp, vact, vfp, vsw, vbp, f) \
	{ \
	.name = nm, .clock = c, \
	.hdisplay = (hact), .hsync_start = (hact) + (hfp), .hsync_end = (hact) + (hfp) + (hsw), .htotal = (hact) + (hfp) + (hsw) + (hbp), .hskew = 0, \
	.vdisplay = (vact), .vsync_start = (vact) + (vfp), .vsync_end = (vact) + (vfp) + (vsw), .vtotal = (vact) + (vfp) + (vsw) + (vbp), .vscan = 0, \
	.vrefresh = DIV_ROUND(c * 1000, ((hact) + (hfp) + (hsw) + (hbp)) * ((vact) + (vfp) + (vsw) + (vbp))) * (((f) & DRM_MODE_FLAG_INTERLACE) ? 2 : 1), \
	.flags = (f), .type = 0 \
	}

const Videomode dmt_modes[] = {
	// 0x1 - 640 x 350 @ 85Hz
	DRM_MODE("640 x 350 @ 85Hz", 31500, 640, 32, 64, 96, 350, 32, 3, 60, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x2 - 640 x 400 @ 85Hz
	DRM_MODE("640 x 400 @ 85Hz", 31500, 640, 32, 64, 96, 400, 1, 3, 41, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x3 - 720 x 400 @ 85Hz
	DRM_MODE("720 x 400 @ 85Hz", 35500, 720, 36, 72, 108, 400, 1, 3, 42, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x4 - 640 x 480 @ 60Hz
	DRM_MODE("640 x 480 @ 60Hz", 25175, 640, 8, 96, 40, 480, 2, 2, 25, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x5 - 640 x 480 @ 72Hz
	DRM_MODE("640 x 480 @ 72Hz", 31500, 640, 16, 40, 120, 480, 1, 3, 20, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x6 - 640 x 480 @ 75Hz
	DRM_MODE("640 x 480 @ 75Hz", 31500, 640, 16, 64, 120, 480, 1, 3, 16, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x7 - 640 x 480 @ 85Hz
	DRM_MODE("640 x 480 @ 85Hz", 36000, 640, 56, 56, 80, 480, 1, 3, 25, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x8 - 800 x 600 @ 56Hz
	DRM_MODE("800 x 600 @ 56Hz", 36000, 800, 24, 72, 128, 600, 1, 2, 22, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x9 - 800 x 600 @ 60Hz
	DRM_MODE("800 x 600 @ 60Hz", 40000, 800, 40, 128, 88, 600, 1, 4, 23, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0xa - 800 x 600 @ 72Hz
	DRM_MODE("800 x 600 @ 72Hz", 50000, 800, 56, 120, 64, 600, 37, 6, 23, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0xb - 800 x 600 @ 75Hz
	DRM_MODE("800 x 600 @ 75Hz", 49500, 800, 16, 80, 160, 600, 1, 3, 21, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0xc - 800 x 600 @ 85Hz
	DRM_MODE("800 x 600 @ 85Hz", 56250, 800, 32, 64, 152, 600, 1, 3, 27, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0xd - 800 x 600 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("800 x 600 @ 120Hz CVT (Reduced Blanking)", 73250, 800, 48, 32, 80, 600, 3, 4, 29, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0xe - 848 x 480 @ 60Hz
	DRM_MODE("848 x 480 @ 60Hz", 33750, 848, 16, 112, 112, 480, 6, 8, 23, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0xf - 1024 x 768 @ 43Hz (Interlaced)
	DRM_MODE("1024 x 768 @ 43Hz (Interlaced)", 44900, 1024, 8, 176, 56, 768, 0, 4, 20, DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x10 - 1024 x 768 @ 60Hz
	DRM_MODE("1024 x 768 @ 60Hz", 65000, 1024, 24, 136, 160, 768, 3, 6, 29, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x11 - 1024 x 768 @ 70Hz
	DRM_MODE("1024 x 768 @ 70Hz", 75000, 1024, 24, 136, 144, 768, 3, 6, 29, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x12 - 1024 x 768 @ 75Hz
	DRM_MODE("1024 x 768 @ 75Hz", 78750, 1024, 16, 96, 176, 768, 1, 3, 28, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x13 - 1024 x 768 @ 85Hz
	DRM_MODE("1024 x 768 @ 85Hz", 94500, 1024, 48, 96, 208, 768, 1, 3, 36, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x14 - 1024 x 768 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1024 x 768 @ 120Hz CVT (Reduced Blanking)", 115500, 1024, 48, 32, 80, 768, 3, 4, 38, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x15 - 1152 x 864 @ 75Hz
	DRM_MODE("1152 x 864 @ 75Hz", 108000, 1152, 64, 128, 256, 864, 1, 3, 32, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x55 - 1280 x 720 @ 60Hz
	DRM_MODE("1280 x 720 @ 60Hz", 74250, 1280, 110, 40, 220, 720, 5, 5, 20, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x16 - 1280 x 768 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("1280 x 768 @ 60Hz CVT (Reduced Blanking)", 68250, 1280, 48, 32, 80, 768, 3, 7, 12, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x17 - 1280 x 768 @ 60Hz
	DRM_MODE("1280 x 768 @ 60Hz", 79500, 1280, 64, 128, 192, 768, 3, 7, 20, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x18 - 1280 x 768 @ 75Hz
	DRM_MODE("1280 x 768 @ 75Hz", 102250, 1280, 80, 128, 208, 768, 3, 7, 27, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x19 - 1280 x 768 @ 85Hz
	DRM_MODE("1280 x 768 @ 85Hz", 117500, 1280, 80, 136, 216, 768, 3, 7, 31, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x1a - 1280 x 768 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1280 x 768 @ 120Hz CVT (Reduced Blanking)", 140250, 1280, 48, 32, 80, 768, 3, 7, 35, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x1b - 1280 x 800 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("1280 x 800 @ 60Hz CVT (Reduced Blanking)", 71000, 1280, 48, 32, 80, 800, 3, 6, 14, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x1c - 1280 x 800 @ 60Hz
	DRM_MODE("1280 x 800 @ 60Hz", 83500, 1280, 72, 128, 200, 800, 3, 6, 22, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x1d - 1280 x 800 @ 75Hz
	DRM_MODE("1280 x 800 @ 75Hz", 106500, 1280, 80, 128, 208, 800, 3, 6, 29, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x1e - 1280 x 800 @ 85Hz
	DRM_MODE("1280 x 800 @ 85Hz", 122500, 1280, 80, 136, 216, 800, 3, 6, 34, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x1f - 1280 x 800 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1280 x 800 @ 120Hz CVT (Reduced Blanking)", 146250, 1280, 48, 32, 80, 800, 3, 6, 38, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x20 - 1280 x 960 @ 60Hz
	DRM_MODE("1280 x 960 @ 60Hz", 108000, 1280, 96, 112, 312, 960, 1, 3, 36, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x21 - 1280 x 960 @ 85Hz
	DRM_MODE("1280 x 960 @ 85Hz", 148500, 1280, 64, 160, 224, 960, 1, 3, 47, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x22 - 1280 x 960 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1280 x 960 @ 120Hz CVT (Reduced Blanking)", 175500, 1280, 48, 32, 80, 960, 3, 4, 50, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x23 - 1280 x 1024 @ 60Hz
	DRM_MODE("1280 x 1024 @ 60Hz", 108000, 1280, 48, 112, 248, 1024, 1, 3, 38, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x24 - 1280 x 1024 @ 75Hz
	DRM_MODE("1280 x 1024 @ 75Hz", 135000, 1280, 16, 144, 248, 1024, 1, 3, 38, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x25 - 1280 x 1024 @ 85Hz
	DRM_MODE("1280 x 1024 @ 85Hz", 157500, 1280, 64, 160, 224, 1024, 1, 3, 44, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x26 - 1280 x 1024 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1280 x 1024 @ 120Hz CVT (Reduced Blanking)", 187250, 1280, 48, 32, 80, 1024, 3, 7, 50, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x27 - 1360 x 768 @ 60Hz
	DRM_MODE("1360 x 768 @ 60Hz", 85500, 1360, 64, 112, 256, 768, 3, 6, 18, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x28 - 1360 x 768 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1360 x 768 @ 120Hz CVT (Reduced Blanking)", 148250, 1360, 48, 32, 80, 768, 3, 5, 37, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x51 - 1366 x 768 @ 60Hz
	DRM_MODE("1366 x 768 @ 60Hz", 85500, 1366, 70, 143, 213, 768, 3, 3, 24, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x56 - 1366 x 768 @ 60Hz
	DRM_MODE("1366 x 768 @ 60Hz", 72000, 1366, 14, 56, 64, 768, 1, 3, 28, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x29 - 1400 x 1050 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("1400 x 1050 @ 60Hz CVT (Reduced Blanking)", 101000, 1400, 48, 32, 80, 1050, 3, 4, 23, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x2a - 1400 x 1050 @ 60Hz
	DRM_MODE("1400 x 1050 @ 60Hz", 121750, 1400, 88, 144, 232, 1050, 3, 4, 32, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x2b - 1400 x 1050 @ 75Hz
	DRM_MODE("1400 x 1050 @ 75Hz", 156000, 1400, 104, 144, 248, 1050, 3, 4, 42, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x2c - 1400 x 1050 @ 85Hz
	DRM_MODE("1400 x 1050 @ 85Hz", 179500, 1400, 104, 152, 256, 1050, 3, 4, 48, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x2d - 1400 x 1050 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1400 x 1050 @ 120Hz CVT (Reduced Blanking)", 208000, 1400, 48, 32, 80, 1050, 3, 4, 55, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x2e - 1440 x 900 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("1440 x 900 @ 60Hz CVT (Reduced Blanking)", 88750, 1440, 48, 32, 80, 900, 3, 6, 17, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x2f - 1440 x 900 @ 60Hz
	DRM_MODE("1440 x 900 @ 60Hz", 106500, 1440, 80, 152, 232, 900, 3, 6, 25, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x30 - 1440 x 900 @ 75Hz
	DRM_MODE("1440 x 900 @ 75Hz", 136750, 1440, 96, 152, 248, 900, 3, 6, 33, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x31 - 1440 x 900 @ 85Hz
	DRM_MODE("1440 x 900 @ 85Hz", 157000, 1440, 104, 152, 256, 900, 3, 6, 39, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x32 - 1440 x 900 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1440 x 900 @ 120Hz CVT (Reduced Blanking)", 182750, 1440, 48, 32, 80, 900, 3, 6, 44, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x53 - 1600 x 900 @ 60Hz
	DRM_MODE("1600 x 900 @ 60Hz", 108000, 1600, 24, 80, 96, 900, 1, 3, 96, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x33 - 1600 x 1200 @ 60Hz
	DRM_MODE("1600 x 1200 @ 60Hz", 162000, 1600, 64, 192, 304, 1200, 1, 3, 46, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x34 - 1600 x 1200 @ 65Hz
	DRM_MODE("1600 x 1200 @ 65Hz", 175500, 1600, 64, 192, 304, 1200, 1, 3, 46, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x35 - 1600 x 1200 @ 70Hz
	DRM_MODE("1600 x 1200 @ 70Hz", 189000, 1600, 64, 192, 304, 1200, 1, 3, 46, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x36 - 1600 x 1200 @ 75Hz
	DRM_MODE("1600 x 1200 @ 75Hz", 202500, 1600, 64, 192, 304, 1200, 1, 3, 46, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x37 - 1600 x 1200 @ 85Hz
	DRM_MODE("1600 x 1200 @ 85Hz", 229500, 1600, 64, 192, 304, 1200, 1, 3, 46, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x38 - 1600 x 1200 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1600 x 1200 @ 120Hz CVT (Reduced Blanking)", 268250, 1600, 48, 32, 80, 1200, 3, 4, 64, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x39 - 1680 x 1050 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("1680 x 1050 @ 60Hz CVT (Reduced Blanking)", 119000, 1680, 48, 32, 80, 1050, 3, 6, 21, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x3a - 1680 x 1050 @ 60Hz
	DRM_MODE("1680 x 1050 @ 60Hz", 146250, 1680, 104, 176, 280, 1050, 3, 6, 30, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x3b - 1680 x 1050 @ 75Hz
	DRM_MODE("1680 x 1050 @ 75Hz", 187000, 1680, 120, 176, 296, 1050, 3, 6, 40, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x3c - 1680 x 1050 @ 85Hz
	DRM_MODE("1680 x 1050 @ 85Hz", 214750, 1680, 128, 176, 304, 1050, 3, 6, 46, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x3d - 1680 x 1050 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1680 x 1050 @ 120Hz CVT (Reduced Blanking)", 245500, 1680, 48, 32, 80, 1050, 3, 6, 53, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x3e - 1792 x 1344 @ 60 Hz
	DRM_MODE("1792 x 1344 @ 60 Hz", 204750, 1792, 128, 200, 328, 1344, 1, 3, 46, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x3f - 1792 x 1344 @ 75Hz
	DRM_MODE("1792 x 1344 @ 75Hz", 261000, 1792, 96, 216, 352, 1344, 1, 3, 69, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x40 - 1792 x 1344 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1792 x 1344 @ 120Hz CVT (Reduced Blanking)", 333250, 1792, 48, 32, 80, 1344, 3, 4, 72, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x41 - 1856 x 1392 at 60Hz
	DRM_MODE("1856 x 1392 at 60Hz", 218250, 1856, 96, 224, 352, 1392, 1, 3, 43, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x42 - 1856 x 1392 @ 75Hz
	DRM_MODE("1856 x 1392 @ 75Hz", 288000, 1856, 128, 224, 352, 1392, 1, 3, 104, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x43 - 1856 x 1392 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1856 x 1392 @ 120Hz CVT (Reduced Blanking)", 356500, 1856, 48, 32, 80, 1392, 3, 4, 75, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x52 - 1920 x 1080 @ 60Hz
	DRM_MODE("1920 x 1080 @ 60Hz", 148500, 1920, 88, 44, 148, 1080, 4, 5, 36, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x44 - 1920 x 1200 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("1920 x 1200 @ 60Hz CVT (Reduced Blanking)", 154000, 1920, 48, 32, 80, 1200, 3, 6, 26, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x45 - 1920 x 1200 @ 60Hz
	DRM_MODE("1920 x 1200 @ 60Hz", 193250, 1920, 136, 200, 336, 1200, 3, 6, 36, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x46 - 1920 x 1200 @ 75Hz
	DRM_MODE("1920 x 1200 @ 75Hz", 245250, 1920, 136, 208, 344, 1200, 3, 6, 46, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x47 - 1920 x 1200 @ 85Hz
	DRM_MODE("1920 x 1200 @ 85Hz", 281250, 1920, 144, 208, 352, 1200, 3, 6, 53, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x48 - 1920 x 1200 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1920 x 1200 @ 120Hz CVT (Reduced Blanking)", 317000, 1920, 48, 32, 80, 1200, 3, 6, 62, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x49 - 1920 x 1440 @ 60Hz
	DRM_MODE("1920 x 1440 @ 60Hz", 234000, 1920, 128, 208, 344, 1440, 1, 3, 56, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x4a - 1920 x 1440 @ 75Hz
	DRM_MODE("1920 x 1440 @ 75Hz", 297000, 1920, 144, 224, 352, 1440, 1, 3, 56, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x4b - 1920 x 1440 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("1920 x 1440 @ 120Hz CVT (Reduced Blanking)", 380500, 1920, 48, 32, 80, 1440, 3, 4, 78, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x54 - 2048 x 1152 @ 60Hz
	DRM_MODE("2048 x 1152 @ 60Hz", 162000, 2048, 26, 80, 96, 1152, 1, 3, 44, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x4c - 2560 x 1600 @ 60Hz CVT (Reduced Blanking)
	DRM_MODE("2560 x 1600 @ 60Hz CVT (Reduced Blanking)", 268500, 2560, 48, 32, 80, 1600, 3, 6, 37, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x4d - 2560 x 1600 @ 60Hz
	DRM_MODE("2560 x 1600 @ 60Hz", 348500, 2560, 192, 280, 472, 1600, 3, 6, 49, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x4e - 2560 x 1600 @ 75Hz
	DRM_MODE("2560 x 1600 @ 75Hz", 443250, 2560, 208, 280, 488, 1600, 3, 6, 63, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x4f - 2560 x 1600 @ 85Hz
	DRM_MODE("2560 x 1600 @ 85Hz", 505250, 2560, 208, 280, 488, 1600, 3, 6, 73, DRM_MODE_FLAG_NHSYNC | DRM_MODE_FLAG_PVSYNC),
	// 0x50 - 2560 x 1600 @ 120Hz CVT (Reduced Blanking)
	DRM_MODE("2560 x 1600 @ 120Hz CVT (Reduced Blanking)", 552750, 2560, 48, 32, 80, 1600, 3, 6, 85, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x57 - 4096 x 2160 @ 60Hz CVT (Reduced Blanking v2)
	DRM_MODE("4096 x 2160 @ 60Hz CVT (Reduced Blanking v2)", 556744, 4096, 8, 32, 40, 2160, 48, 8, 6, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	// 0x58 - 4096 x 2160 @ 59.94 Hz CVT (Reduced Blanking v2)
	DRM_MODE("4096 x 2160 @ 59.94 Hz CVT (Reduced Blanking v2)", 556188, 4096, 8, 32, 40, 2160, 48, 8, 6, DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_NVSYNC),
	/* TERMINATOR */
	{ },
};

}
