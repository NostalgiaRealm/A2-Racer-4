
/* ==== TThreadList.Destroy @ 0041064c ==== 
 * signature: undefined TThreadList.Destroy(void)
 * body: 0041064c-004106ad
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TThreadList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00410750((int)piVar1);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00402f9c((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = uStackY_18;
  FUN_004107b4((int)piVar1);
  uStackY_18 = 0x4106ad;
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  return;
}


