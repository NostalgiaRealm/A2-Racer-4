
/* ==== TObject.NewInstance @ 00402ca8 ==== 
 * signature: undefined __register TObject.NewInstance(int param_1)
 * body: 00402ca8-00402cb8
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObject_NewInstance(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004026b8(*(int *)(param_1 + -0x28));
  FUN_00402d20(param_1,piVar1);
  return;
}


