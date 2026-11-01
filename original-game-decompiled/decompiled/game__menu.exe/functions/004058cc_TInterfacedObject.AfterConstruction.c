
/* ==== TInterfacedObject.AfterConstruction @ 004058cc ==== 
 * signature: undefined TInterfacedObject.AfterConstruction(void)
 * body: 004058cc-004058d5
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TInterfacedObject_AfterConstruction(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 4));
  return;
}


