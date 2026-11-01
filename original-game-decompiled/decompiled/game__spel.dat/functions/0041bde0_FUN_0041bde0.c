
/* ==== FUN_0041bde0 @ 0041bde0 ==== 
 * signature: undefined __fastcall FUN_0041bde0(void * param_1)
 * body: 0041bde0-0041be6b
 */

void __fastcall FUN_0041bde0(void *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (-1 < DAT_005d2ab0) {
    this = (void *)((int)param_1 + 0xec);
    do {
      FUN_0041c660((void *)((int)this + -0x70),0x10);
      FUN_0041c660(this,0x10);
      FUN_0041c660((void *)((int)this + 0x70),0x10);
      iVar3 = 0;
      do {
        if (0xf < iVar3) break;
        iVar1 = FUN_0041b690(param_1,iVar2,(char)iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar1 != -1);
      iVar3 = 0;
      do {
        if (0xf < iVar3) break;
        iVar1 = FUN_0041b9d0(param_1,iVar2,(char)iVar3,1);
        iVar3 = iVar3 + 1;
      } while (iVar1 != -1);
      iVar3 = 0;
      do {
        if (0xf < iVar3) break;
        iVar1 = FUN_0041b9d0(param_1,iVar2,(char)iVar3,2);
        iVar3 = iVar3 + 1;
      } while (iVar1 != -1);
      iVar2 = iVar2 + 1;
      this = (void *)((int)this + 0x10);
    } while (iVar2 <= DAT_005d2ab0);
  }
  return;
}


