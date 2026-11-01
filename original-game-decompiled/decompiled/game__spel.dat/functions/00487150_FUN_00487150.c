
/* ==== FUN_00487150 @ 00487150 ==== 
 * signature: undefined __thiscall FUN_00487150(void * this, int param_1)
 * body: 00487150-004871af
 */

void __thiscall FUN_00487150(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = FUN_0047bc00((int)this);
  if (cVar2 != '\0') {
    iVar3 = (*(code *)**(undefined4 **)((int)this + 0x84))();
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = **(int **)(*(int *)(*(int *)((int)this + 0x88) + 4) + iVar5 * 4);
        iVar4 = FUN_0047bde0((int)this);
        (**(code **)(iVar1 + 0x28))(iVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    FUN_0047c030(this,param_1);
  }
  return;
}


