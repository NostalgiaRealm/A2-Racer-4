
/* ==== FUN_0040d0a0 @ 0040d0a0 ==== 
 * signature: undefined __register FUN_0040d0a0(int * param_1, int param_2, OLECHAR * param_3)
 * body: 0040d0a0-0040d0dc
 */

void FUN_0040d0a0(int *param_1,int param_2,OLECHAR *param_3)

{
  code *pcVar1;
  OLECHAR *pOVar2;
  
  pOVar2 = *(OLECHAR **)(param_2 + 0x10);
  if (*(OLECHAR **)(param_2 + 0x10) == (OLECHAR *)0x80000000) {
    pOVar2 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 8);
  if (*(byte *)(param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,pOVar2);
    return;
  }
  FUN_0040d08c((BSTR *)((int)param_1 + ((uint)pcVar1 & 0xffffff)),param_3);
  return;
}


