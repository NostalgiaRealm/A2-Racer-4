
/* ==== TInterfacedObject.BeforeDestruction @ 004058d8 ==== 
 * signature: undefined TInterfacedObject.BeforeDestruction(void)
 * body: 004058d8-004058e5
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TInterfacedObject_BeforeDestruction(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00402808(CONCAT31((int3)((uint)param_1 >> 8),2));
  }
  return;
}


