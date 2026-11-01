
/* ==== dso_read_code @ 004ddb10 ==== 
 * signature: undefined __thiscall dso_read_code(void * this, int * param_1)
 * body: 004ddb10-004ddd4d
 * note: ANALYST: u16 count then instructions. [confidence: confirmed] [evidence: code]
 */

/* WARNING: Removing unreachable block (ram,0x004ddcec) */
/* WARNING: Removing unreachable block (ram,0x004ddd07) */
/* WARNING: Removing unreachable block (ram,0x004ddd16) */
/* WARNING: Removing unreachable block (ram,0x004ddd1d) */
/* ANALYST: u16 count then instructions. [confidence: confirmed] [evidence: code] */

void __thiscall dso_read_code(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  short local_e [2];
  short sStack_a;
  undefined4 local_8;
  LPVOID local_4;
  
  FUN_004d74b0(param_1,local_e);
  iVar9 = (int)this + 4;
  uVar8 = (uint)local_e[0];
  if (*(int *)((int)this + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8) >> 2;
  }
  if (uVar1 < uVar8) {
    uVar1 = uVar8;
    if ((int)uVar8 < 0) {
      uVar1 = 0;
    }
    puVar2 = operator_new(uVar1 * 4);
    puVar7 = *(undefined4 **)((int)this + 0xc);
    puVar6 = puVar2;
    for (puVar5 = *(undefined4 **)((int)this + 8); puVar5 != puVar7; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    local_4 = *(LPVOID *)((int)this + 8);
    FUN_0054b339(local_4);
    *(undefined4 **)((int)this + 0x10) = puVar2 + uVar8;
    if (*(int *)((int)this + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + iVar3;
  }
  local_8 = 0;
  if (0 < local_e[0]) {
    do {
      local_8 = dso_read_instruction(param_1);
      puVar7 = *(undefined4 **)((int)this + 0xc);
      if (*(int *)((int)this + 0x10) - (int)puVar7 >> 2 == 0) {
        uVar8 = FUN_00492480(iVar9);
        if (uVar8 < 2) {
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_00492480(iVar9);
        }
        iVar4 = FUN_00492480(iVar9);
        iVar4 = iVar4 + iVar3;
        iVar3 = iVar4;
        if (iVar4 < 0) {
          iVar3 = 0;
        }
        puVar5 = operator_new(iVar3 * 4);
        puVar6 = FUN_004de170(*(undefined4 **)((int)this + 8),puVar7,puVar5);
        FUN_004de280(puVar6,1,&local_8);
        FUN_004de170(puVar7,*(undefined4 **)((int)this + 0xc),puVar6 + 1);
        FUN_0042f530();
        FUN_0054b339(*(LPVOID *)((int)this + 8));
        *(undefined4 **)((int)this + 0x10) = puVar5 + iVar4;
        iVar3 = FUN_00492480(iVar9);
        *(undefined4 **)((int)this + 8) = puVar5;
        *(undefined4 **)((int)this + 0xc) = puVar5 + iVar3 + 1;
      }
      else {
        FUN_004de170(puVar7,puVar7,puVar7 + 1);
        FUN_004de280(*(undefined4 **)((int)this + 0xc),
                     1 - ((int)*(undefined4 **)((int)this + 0xc) - (int)puVar7 >> 2),&local_8);
        puVar5 = *(undefined4 **)((int)this + 0xc);
        for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
          *puVar7 = local_8;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
      }
      local_4 = (LPVOID)((int)local_4 + 1);
    } while ((int)local_4 < (int)sStack_a);
  }
  return;
}


