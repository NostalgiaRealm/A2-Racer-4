
/* ==== TInterfacedObject.NewInstance @ 004058e8 ==== 
 * signature: undefined TInterfacedObject.NewInstance(void)
 * body: 004058e8-004058f4
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TInterfacedObject_NewInstance(int param_1)

{
  int iVar1;
  
  iVar1 = TObject_NewInstance(param_1);
  *(undefined4 *)(iVar1 + 4) = 1;
  return;
}


