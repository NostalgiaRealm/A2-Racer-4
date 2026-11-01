
/* ==== FUN_00517a20 @ 00517a20 ==== 
 * signature: undefined __cdecl FUN_00517a20(uint param_1)
 * body: 00517a20-00517aea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00517a20(uint param_1)

{
  bool bVar1;
  int iVar2;
  double local_10;
  
  bVar1 = false;
  if (param_1 == DAT_0074c600) {
    DAT_0074ca48 = 0;
  }
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0x30) == 0) break;
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar2 = FUN_005151d0(param_1,&local_10,0);
        if (iVar2 == 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error__facet_f_d_005bb69c);
          if (DAT_0074be4c == 0) {
            FUN_0051eb30(s_ERRONEOUS_005b9f2c,param_1,0,(int *)0x0,0);
            bVar1 = true;
          }
        }
      }
      param_1 = *(uint *)(param_1 + 0x30);
    } while (param_1 != 0);
    if (bVar1) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_A_flipped_facet_occurs_when_its_d_005bb628);
      FUN_0051e8e0(3,(int *)0x0);
    }
  }
  return;
}


