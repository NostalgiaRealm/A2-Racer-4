
/* ==== Catch@00402b79 @ 00402b79 ==== 
 * signature: undefined * __stdcall Catch@00402b79(void)
 * body: 00402b79-00402b99
 */

undefined * Catch_00402b79(void)

{
  uint uVar1;
  void *pvVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  uVar1 = *(int *)(unaff_EBP + 8) + 2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  pvVar2 = operator_new(uVar1);
  *(void **)(unaff_EBP + 8) = pvVar2;
  return FUN_00402b9a;
}


