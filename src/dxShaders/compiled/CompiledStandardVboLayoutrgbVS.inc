#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
///
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// POSITION                 0   xyzw        0     NONE   float       
// NORMAL                   0   xyz         1     NONE   float       
// COLOR                    0   xyz         2     NONE   float       
// TEXCOORD                 0   xy          3     NONE   float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float   xyzw
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c0                              Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_0
    def c1, 1, 0, 0, 0
    mov r0.xy, c1
    mad oPos, c0.xyxx, r0.xxyy, r0.yyyx

// approximately 2 instruction slots used
vs_4_0
dcl_output_siv o0.xyzw, position
mov o0.xyzw, l(0,0,0,1.000000)
ret 
// Approximately 0 instruction slots used
#endif

const BYTE StandardVboLayoutrgbVS[] =
{
     68,  88,  66,  67,  26, 143, 
    194, 137, 145, 123, 246,  50, 
     76,  60,  83, 237, 185, 105, 
    174, 220,   1,   0,   0,   0, 
    168,   1,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    160,   0,   0,   0, 228,   0, 
      0,   0, 116,   1,   0,   0, 
     65, 111, 110,  57, 104,   0, 
      0,   0, 104,   0,   0,   0, 
      0,   2, 254, 255,  64,   0, 
      0,   0,  40,   0,   0,   0, 
      0,   0,  36,   0,   0,   0, 
     36,   0,   0,   0,  36,   0, 
      0,   0,  36,   0,   1,   0, 
     36,   0,   0,   0,   0,   0, 
      0,   2, 254, 255,  81,   0, 
      0,   5,   1,   0,  15, 160, 
      0,   0, 128,  63,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   2,   0,   0,   3, 128, 
      1,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,  15, 192, 
      0,   0,   4, 160,   0,   0, 
     80, 128,   0,   0,  21, 128, 
    255, 255,   0,   0,  83,  72, 
     68,  82,  60,   0,   0,   0, 
     64,   0,   1,   0,  15,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     54,   0,   0,   8, 242,  32, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    128,  63,  62,   0,   0,   1, 
     73,  83,  71,  78, 136,   0, 
      0,   0,   4,   0,   0,   0, 
      8,   0,   0,   0, 104,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0, 113,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   0,   0,   0, 120,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      7,   0,   0,   0, 126,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,  80,  79, 
     83,  73,  84,  73,  79,  78, 
      0,  78,  79,  82,  77,  65, 
     76,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0
};