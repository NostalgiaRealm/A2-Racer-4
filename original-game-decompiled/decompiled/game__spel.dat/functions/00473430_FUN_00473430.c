
/* ==== FUN_00473430 @ 00473430 ==== 
 * signature: uint __thiscall FUN_00473430(void * this, int param_1, undefined4 * param_2)
 * body: 00473430-00473491
 */

uint __thiscall FUN_00473430(void *this,int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = (*(code *)**(undefined4 **)this)();
  if (0 < (int)uVar2) {
    do {
      puVar3 = (undefined4 *)**(undefined4 **)((int)this + 8);
      iVar4 = iVar5;
      if (0 < iVar5) {
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      bVar1 = FUN_00472a90((void *)puVar3[2],param_1);
      if (bVar1) {
        puVar3 = (undefined4 *)**(undefined4 **)((int)this + 8);
        if (0 < iVar5) {
          do {
            puVar3 = (undefined4 *)*puVar3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *param_2 = puVar3[2];
        return CONCAT31((int3)((uint)puVar3 >> 8),1);
      }
      iVar5 = iVar5 + 1;
      uVar2 = (*(code *)**(undefined4 **)this)();
    } while (iVar5 < (int)uVar2);
  }
  return uVar2 & 0xffffff00;
}


