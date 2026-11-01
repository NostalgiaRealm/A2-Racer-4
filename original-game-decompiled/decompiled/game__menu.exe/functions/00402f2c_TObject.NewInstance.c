
/* ==== TObject.NewInstance @ 00402f2c ==== 
 * signature: undefined __register TObject.NewInstance(int param_1)
 * body: 00402f2c-00402f3c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObject_NewInstance(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0040277c(*(int *)(param_1 + -0x28));
  FUN_00402fa8(param_1,piVar1);
  return;
}


