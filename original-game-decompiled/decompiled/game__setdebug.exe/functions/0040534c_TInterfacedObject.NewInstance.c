
/* ==== TInterfacedObject.NewInstance @ 0040534c ==== 
 * signature: undefined TInterfacedObject.NewInstance(void)
 * body: 0040534c-00405358
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


