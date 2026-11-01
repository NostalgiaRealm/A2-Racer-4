
/* ==== FUN_0054caea @ 0054caea ==== 
 * signature: undefined4 * __stdcall FUN_0054caea(void)
 * body: 0054caea-0054cba2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0054caea(void)

{
  void *pvVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  puVar3 = DAT_0074daf8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    pvVar1 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = pvVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (pvVar1 == (void *)0x0) {
      DAT_0074daf8 = (undefined4 *)0x0;
    }
    else {
      DAT_0074daf8 = FUN_0054cbeb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_005584e0(0x54cba3);
    DAT_0074daf8[4] = 0x3f;
    puVar3 = DAT_0074daf8 + 6;
    sVar2 = _strlen(&DAT_005b6f4c);
    FUN_00402940(puVar3,(undefined4 *)&DAT_005b6f4c,sVar2);
    DAT_0074daf4 = DAT_0074daf8;
    if (DAT_0074daf8[1] != -1) {
      DAT_0074daf8[1] = DAT_0074daf8[1] + 1;
    }
    _DAT_0074daf0 = DAT_0074daf4;
    puVar3 = DAT_0074daf8;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


