
/* ==== TInterfacedObject.AfterConstruction @ 00405330 ==== 
 * signature: undefined TInterfacedObject.AfterConstruction(void)
 * body: 00405330-00405339
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TInterfacedObject_AfterConstruction(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 4));
  return;
}


