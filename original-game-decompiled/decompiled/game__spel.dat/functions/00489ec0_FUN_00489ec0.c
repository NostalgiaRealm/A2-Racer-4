
/* ==== FUN_00489ec0 @ 00489ec0 ==== 
 * signature: undefined __thiscall FUN_00489ec0(void * this, void * param_1, undefined4 param_2, int param_3)
 * body: 00489ec0-0048a00d
 */

void __thiscall FUN_00489ec0(void *this,void *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int local_4;
  
  if (*(int *)((int)this + 0x360) < 10) {
    iVar6 = 0;
    local_4 = param_3;
    if (0 < *(int *)((int)this + 0x360)) {
      piVar3 = (int *)((int)this + 0x2d0);
      do {
        if ((param_1 == (void *)*piVar3) && (param_3 == piVar3[2])) {
          *(undefined4 *)((int)this + iVar6 * 0xc + 0x2d4) = param_2;
          return;
        }
        iVar1 = FUN_0049d720(param_1,*piVar3);
        if (iVar1 < 1) {
          puVar2 = (undefined4 *)((int)this + (iVar6 * 3 + 0xb4) * 4);
          pvVar4 = (void *)*puVar2;
          uVar5 = puVar2[1];
          local_4 = puVar2[2];
          *puVar2 = param_1;
          puVar2[1] = param_2;
          puVar2[2] = param_3;
          iVar6 = iVar6 + 1;
          param_1 = pvVar4;
          param_2 = uVar5;
          if (iVar6 < *(int *)((int)this + 0x360)) {
            puVar2 = (undefined4 *)((int)this + (iVar6 * 3 + 0xb4) * 4);
            do {
              iVar6 = iVar6 + 1;
              param_1 = (void *)*puVar2;
              param_2 = puVar2[1];
              iVar1 = puVar2[2];
              *puVar2 = pvVar4;
              puVar2[1] = uVar5;
              puVar2[2] = local_4;
              puVar2 = puVar2 + 3;
              pvVar4 = param_1;
              uVar5 = param_2;
              local_4 = iVar1;
            } while (iVar6 < *(int *)((int)this + 0x360));
          }
          break;
        }
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar6 < *(int *)((int)this + 0x360));
    }
    iVar6 = *(int *)((int)this + 0x360) + 0x3c;
    *(void **)((int)this + iVar6 * 0xc) = param_1;
    *(undefined4 *)((int)this + iVar6 * 0xc + 4) = param_2;
    *(int *)((int)this + iVar6 * 0xc + 8) = local_4;
    *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + 1;
  }
  return;
}


