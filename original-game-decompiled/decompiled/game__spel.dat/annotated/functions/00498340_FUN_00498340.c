
/* ==== FUN_00498340 @ 00498340 ==== 
 * signature: undefined __thiscall FUN_00498340(void * this, char * param_1)
 * body: 00498340-00498483
 */

void __thiscall FUN_00498340(void *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  char *pcVar4;
  undefined1 *this_00;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_10;
  int *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  bVar3 = false;
  if (param_1 != (char *)0x0) {
    iVar12 = 0;
    local_c = this;
    if (0 < *(int *)this) {
      do {
        local_10 = **(int **)((int)this + 0xc);
        iVar11 = iVar12;
        if (0 < iVar12) {
          do {
            FUN_00448fd0(&local_10,&local_4);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        pcVar4 = *(char **)(*(int *)(local_10 + 8) + 4);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "";
        }
        iVar11 = __strcmpi(pcVar4,param_1);
        if (iVar11 == 0) {
          iVar12 = *(int *)this;
          bVar3 = true;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)this);
      if (bVar3) {
        return;
      }
    }
    this_00 = operator_new(0x10);
    if (this_00 == (undefined1 *)0x0) {
      this_00 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(this_00 + 4) = 0;
      *this_00 = param_1._0_1_;
      *(undefined4 *)(this_00 + 8) = 0;
      *(undefined4 *)(this_00 + 0xc) = 0;
    }
    uVar7 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    local_8 = this_00;
    uVar5 = FUN_00402a00(this_00,uVar7,'\x01');
    if ((char)uVar5 != '\0') {
      pcVar4 = *(char **)(this_00 + 4);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar4 = *param_1;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      }
      *(uint *)(this_00 + 8) = uVar7;
      *(undefined1 *)(*(int *)(this_00 + 4) + uVar7) = 0;
      this = local_c;
    }
    piVar2 = *(int **)((int)this + 0xc);
    piVar10 = (int *)piVar2[1];
    piVar6 = operator_new(0xc);
    piVar9 = piVar2;
    if (piVar2 == (int *)0x0) {
      piVar9 = piVar6;
    }
    *piVar6 = (int)piVar9;
    if (piVar10 == (int *)0x0) {
      piVar10 = piVar6;
    }
    piVar6[1] = (int)piVar10;
    piVar2[1] = (int)piVar6;
    *(int **)piVar6[1] = piVar6;
    FUN_004d2770(piVar6 + 2,&local_8);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(int *)this = *(int *)this + 1;
  }
  return;
}


