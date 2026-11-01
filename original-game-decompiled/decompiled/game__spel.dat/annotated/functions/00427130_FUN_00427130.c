
/* ==== FUN_00427130 @ 00427130 ==== 
 * signature: undefined __fastcall FUN_00427130(void * param_1)
 * body: 00427130-00427169
 */

void __fastcall FUN_00427130(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)param_1 + 0x10);
  do {
    iVar1 = FUN_00425230(puVar3);
    if (iVar1 != -1) {
      iVar1 = FUN_00425300((int)puVar3);
      if (*(int *)((int)param_1 + 8) < iVar1) {
        FUN_00426530(param_1,iVar2);
      }
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 5;
  } while (iVar2 < 0xfa);
  return;
}


