
/* ==== FUN_0056330e @ 0056330e ==== 
 * signature: undefined __stdcall FUN_0056330e(void)
 * body: 0056330e-00563314
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056330e(void)

{
  char cVar1;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  DAT_0074de88 = '\0';
  if (DAT_0074dc40 != 0) {
    DAT_0074de88 = 0;
    return;
  }
  _DAT_0074de80 = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        DAT_0074de88 = 0;
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_005633e3;
    }
    if (((ulonglong)_DAT_0074de80 & 0x7ff0000000000000) == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_005633e3;
    }
    if ((DAT_0074de86 & 0x7ff0) == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_005633e3;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    DAT_0074de88 = 0;
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    DAT_0074de88 = 0;
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_005633e3:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if (DAT_0074de88 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_00565d8a((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}


