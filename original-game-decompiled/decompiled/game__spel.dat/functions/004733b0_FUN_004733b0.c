
/* ==== FUN_004733b0 @ 004733b0 ==== 
 * signature: undefined __thiscall FUN_004733b0(void * this, void * param_1)
 * body: 004733b0-00473425
 */

void __thiscall FUN_004733b0(void *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = (*(code *)**(undefined4 **)this)();
  if (0 < iVar2) {
    while( true ) {
      puVar3 = (undefined4 *)**(undefined4 **)((int)this + 8);
      iVar2 = iVar5;
      if (0 < iVar5) {
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      bVar1 = FUN_00472ad0(param_1,puVar3[2]);
      if (bVar1) break;
      iVar5 = iVar5 + 1;
      iVar2 = (*(code *)**(undefined4 **)this)();
      if (iVar2 <= iVar5) {
        return;
      }
    }
    piVar4 = (int *)**(undefined4 **)((int)this + 8);
    if (0 < iVar5) {
      do {
        piVar4 = (int *)*piVar4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_0054b339(piVar4);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  }
  return;
}


