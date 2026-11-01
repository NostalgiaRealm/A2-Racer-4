
/* ==== TInterfacedObject.BeforeDestruction @ 0040533c ==== 
 * signature: undefined TInterfacedObject.BeforeDestruction(void)
 * body: 0040533c-00405349
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TInterfacedObject_BeforeDestruction(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),2));
  }
  return;
}


