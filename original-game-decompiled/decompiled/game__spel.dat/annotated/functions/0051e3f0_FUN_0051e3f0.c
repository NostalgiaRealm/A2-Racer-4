
/* ==== FUN_0051e3f0 @ 0051e3f0 ==== 
 * signature: undefined __cdecl FUN_0051e3f0(int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5)
 * body: 0051e3f0-0051e4b6
 */

/* WARNING: Removing unreachable block (ram,0x0051e42d) */

void __cdecl FUN_0051e3f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  DAT_0074c788 = param_1;
  DAT_0074c764 = param_2 + -1;
  DAT_0074c750 = param_4;
  DAT_0074c75c = param_3;
  DAT_0074c754 = param_5;
  DAT_0074c76c = FUN_0055ab88(param_3,4);
  DAT_0074c768 = FUN_0055ab88(param_3,4);
  if ((DAT_0074c76c == (int *)0x0) || (DAT_0074c768 == (int *)0x0)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_meminit___insuff_005be504);
    FUN_0051e8e0(4,(int *)0x0);
  }
  if (0 < DAT_0074c788) {
    FUN_00558953(DAT_0074c784,(byte *)s_qh_meminitbuffers__memory_initia_005be4c8);
  }
  return;
}


