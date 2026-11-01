
/* ==== TThreadList.Destroy @ 0040f288 ==== 
 * signature: undefined TThreadList.Destroy(void)
 * body: 0040f288-0040f2e9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TThreadList_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_0040f38c((int)piVar1);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00402d14((int *)piVar1[1]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = uStackY_18;
  FUN_0040f3f0((int)piVar1);
  uStackY_18 = 0x40f2e9;
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  return;
}


