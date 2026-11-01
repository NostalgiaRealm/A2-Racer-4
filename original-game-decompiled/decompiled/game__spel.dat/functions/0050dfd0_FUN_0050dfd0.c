
/* ==== FUN_0050dfd0 @ 0050dfd0 ==== 
 * signature: uint __thiscall FUN_0050dfd0(void * this, int param_1, float param_2)
 * body: 0050dfd0-0050e2b9
 */

uint __thiscall FUN_0050dfd0(void *this,int param_1,float param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_c;
  ushort local_8;
  
  *(short *)((int)this + 0x10) = *(short *)((int)this + 0x10) + 1;
  if (*(ushort *)((int)this + 2) == 0xffff) {
    iVar6 = FUN_004f5a90((*(ushort *)this + 1) * 0x20);
    uVar4 = 0;
    if (*(short *)this != 0) {
      iVar13 = 0;
      do {
        puVar10 = (undefined4 *)(iVar13 + *(int *)((int)this + 4));
        puVar1 = (undefined4 *)(iVar13 + iVar6);
        uVar4 = uVar4 + 1;
        iVar13 = iVar13 + 0x10;
        *puVar1 = *puVar10;
        puVar1[1] = puVar10[1];
        puVar1[2] = puVar10[2];
        puVar1[3] = puVar10[3];
      } while (uVar4 < *(ushort *)this);
    }
    *(short *)this = *(short *)this * 2 + 1;
    if (*(LPVOID *)((int)this + 4) != (LPVOID)0x0) {
      FUN_00559d4e(*(LPVOID *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    puVar5 = (undefined2 *)(uVar4 * 0x10 + iVar6);
    uVar14 = uVar4 + 1;
    *(int *)((int)this + 4) = iVar6;
    *(short *)((int)this + 2) = (short)uVar14;
    if (uVar14 < *(ushort *)this) {
      iVar6 = uVar14 * 0x10;
      do {
        sVar3 = (short)uVar14;
        uVar14 = uVar14 + 1;
        *(short *)(iVar6 + 4 + *(int *)((int)this + 4)) = sVar3 + 1;
        iVar6 = iVar6 + 0x10;
      } while (uVar14 < *(ushort *)this);
    }
    *(undefined2 *)((uint)*(ushort *)this * 0x10 + -0xc + *(int *)((int)this + 4)) = 0xffff;
  }
  else {
    uVar4 = (uint)*(ushort *)((int)this + 2);
    puVar5 = (undefined2 *)(uVar4 * 0x10 + *(int *)((int)this + 4));
    *(undefined2 *)((int)this + 2) = puVar5[2];
  }
  *(int *)(puVar5 + 6) = param_1;
  *(float *)(puVar5 + 4) = param_2;
  *puVar5 = 0xfffe;
  uVar9 = (undefined2)uVar4;
  if (param_2 <= *(float *)((int)this + 8)) {
    *(float *)((int)this + 8) = param_2;
    puVar5[2] = *(undefined2 *)((int)this + 0xe);
    if (*(ushort *)((int)this + 0xe) != 0xffff) {
      *(undefined2 *)((uint)*(ushort *)((int)this + 0xe) * 0x10 + 6 + *(int *)((int)this + 4)) =
           uVar9;
    }
    *(undefined2 *)((int)this + 0xe) = uVar9;
    puVar5[3] = 0xffff;
    return uVar4;
  }
  param_1 = 3;
  uVar14 = (uint)*(ushort *)((int)this + 0xe);
  if (*(ushort *)((int)this + 0xc) != 0xffff) {
    uVar8 = (uint)*(ushort *)((int)this + 0xc);
    do {
      uVar7 = uVar8;
      puVar11 = (ushort *)(uVar7 * 0x10 + *(int *)((int)this + 4));
      if (param_2 <= *(float *)(puVar11 + 4)) break;
      param_1 = param_1 + 1;
      uVar8 = (uint)*puVar11;
      uVar14 = uVar7;
    } while (uVar8 != 0xffff);
  }
  iVar6 = *(int *)((int)this + 4);
  iVar12 = uVar14 * 0x10;
  iVar13 = iVar12 + iVar6;
  uVar2 = *(ushort *)(iVar13 + 4);
  local_c = 0;
  uVar8 = uVar14;
  do {
    uVar7 = (uint)uVar2;
    if (uVar7 == 0xffff) {
      puVar5[2] = uVar2;
      puVar5[3] = (short)uVar8;
      *(undefined2 *)(iVar13 + 4) = uVar9;
LAB_0050e1de:
      if (param_1 < local_c) {
        uVar8 = uVar14;
        if (2 < param_1) {
          iVar6 = param_1 + -2;
          do {
            iVar6 = iVar6 + -1;
            uVar8 = (uint)*(ushort *)(uVar8 * 0x10 + 4 + *(int *)((int)this + 4));
          } while (iVar6 != 0);
        }
        uVar2 = *(ushort *)(iVar12 + *(int *)((int)this + 4));
        uVar7 = (uint)uVar2;
        puVar11 = (ushort *)(uVar8 * 0x10 + *(int *)((int)this + 4));
        uVar9 = (undefined2)uVar8;
        if (uVar7 != 0xfffe) {
          local_8 = (ushort)uVar14;
          *puVar11 = uVar2;
          puVar11[1] = local_8;
          if (uVar7 != 0xffff) {
            *(undefined2 *)(uVar7 * 0x10 + 2 + *(int *)((int)this + 4)) = uVar9;
          }
          *(undefined2 *)(*(int *)((int)this + 4) + iVar12) = uVar9;
          return uVar4;
        }
        uVar2 = *(ushort *)((int)this + 0xc);
        puVar11[1] = 0xffff;
        *puVar11 = uVar2;
        if (*(ushort *)((int)this + 0xc) != 0xffff) {
          *(undefined2 *)((uint)*(ushort *)((int)this + 0xc) * 0x10 + 2 + *(int *)((int)this + 4)) =
               uVar9;
        }
        *(undefined2 *)((int)this + 0xc) = uVar9;
      }
      return uVar4;
    }
    iVar13 = uVar7 * 0x10 + iVar6;
    local_c = local_c + 1;
    if (param_2 <= *(float *)(iVar13 + 8)) {
      iVar6 = uVar8 * 0x10 + iVar6;
      puVar5[2] = *(undefined2 *)(iVar6 + 4);
      *(undefined2 *)(uVar7 * 0x10 + 6 + *(int *)((int)this + 4)) = uVar9;
      puVar5[3] = (short)uVar8;
      *(undefined2 *)(iVar6 + 4) = uVar9;
      goto LAB_0050e1de;
    }
    uVar2 = *(ushort *)(iVar13 + 4);
    uVar8 = uVar7;
  } while( true );
}


