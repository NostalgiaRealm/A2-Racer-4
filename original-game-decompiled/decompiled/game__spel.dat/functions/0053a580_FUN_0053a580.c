
/* ==== FUN_0053a580 @ 0053a580 ==== 
 * signature: undefined __thiscall FUN_0053a580(void * this, uint param_1)
 * body: 0053a580-0053aae0
 */

void __thiscall FUN_0053a580(void *this,uint param_1)

{
  double dVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float10 fVar16;
  undefined8 local_c58;
  int local_c50;
  int iStack_c4c;
  undefined1 *puStack_c48;
  uint uStack_c44;
  int iStack_c40;
  int iStack_c3c;
  int iStack_c38;
  undefined8 local_c34;
  undefined4 *local_c2c;
  undefined4 uStack_c28;
  int iStack_c24;
  int iStack_c20;
  ushort uStack_c1c;
  ushort uStack_c1a;
  undefined1 *puStack_c18;
  undefined1 auStack_c14 [512];
  undefined2 local_a14;
  ushort local_a12;
  undefined1 *local_a10;
  undefined1 local_a0c [512];
  undefined1 auStack_80c [2048];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005741f1;
  local_c = ExceptionList;
  local_a10 = local_a0c;
  local_c34 = (double)CONCAT44(local_c34._4_4_,this);
  local_a14 = 0x80;
  local_a12 = 0;
  local_4 = 0;
  iVar4 = *(int *)(param_1 + 0x9c);
  ExceptionList = &local_c;
  local_c50 = iVar4;
  if (iVar4 != 0) {
    iVar9 = *(int *)(param_1 + 0xa4);
    ExceptionList = &local_c;
    FUN_0050bc60(*(void **)(*(int *)((int)this + 4) + 0x14),iVar4);
    *(int *)(*(int *)((int)this + 4) + 0x88) = *(int *)(*(int *)((int)this + 4) + 0x88) + 1;
    local_c58 = *(double *)(iVar9 + 400);
    local_c2c = *(undefined4 **)(iVar9 + 0x198);
    uStack_c28 = *(undefined4 *)(iVar9 + 0x19c);
    dVar1 = *(double *)(iVar9 + 0x198);
    *(float *)(iVar4 + 0x10) = (float)*(double *)(iVar9 + 0x188);
    *(float *)(iVar4 + 0x14) = (float)local_c58;
    *(float *)(iVar4 + 0x18) = (float)dVar1;
    if (*(int *)this == 0) {
      fVar16 = (float10)(**(code **)(**(int **)(*(int *)((int)this + 4) + 0x1c) + 4))(param_1);
      puVar12 = *(undefined4 **)(*(int *)((int)this + 4) + 0x2c);
      local_c58 = (double)((float10)*(float *)(iVar9 + 4) + fVar16);
      if ((puVar12 != (undefined4 *)0x0) && ((*(uint *)(param_1 + 0x80) & 7) != 0)) {
        *(undefined4 *)this = 1;
        (**(code **)*puVar12)(param_1,iVar4 + 0x10,local_c58);
        *(undefined4 *)this = 0;
      }
      fVar16 = FUN_0050b9b0(*(void **)(*(int *)((int)this + 4) + 0x14),iVar4,(uint)local_c58,
                            local_c58._4_4_,local_c58,(int)&local_a14);
      local_c58 = (double)(fVar16 - (float10)*(float *)(iVar9 + 4));
      FUN_0050aac0(iVar4,(double *)(param_1 + 0x48),local_c58);
      uVar14 = 0x400;
      local_c2c = *(undefined4 **)(*(int *)((int)this + 4) + 0x18);
      uVar13 = CONCAT22(local_a10._0_2_,local_a12);
      uVar15 = ((uint)*(ushort *)(iVar4 + 0x2a) + (uint)local_a12) * 4 + 4;
      if (uVar15 < 0x400) {
        do {
          uVar14 = (int)uVar14 >> 1;
        } while (uVar15 < uVar14);
      }
      uVar15 = (uint)*(ushort *)(iVar4 + 0x2a);
      if (uVar15 < uVar14) {
        uVar15 = uVar14 - 1;
        puVar8 = auStack_80c;
        iStack_c40 = 0;
        uStack_c44 = uVar15;
      }
      else {
        iStack_c40 = 1;
        if (uVar14 <= uVar15 * 2) {
          do {
            uVar14 = uVar14 * 2;
          } while (uVar14 + uVar15 * -2 == 0 || (int)uVar14 < (int)(uVar15 * 2));
        }
        uVar15 = uVar14 - 1;
        uStack_c44 = uVar15;
        puVar8 = (undefined1 *)FUN_004f5a90(uVar14 * 2);
        uVar13 = CONCAT22(local_a10._0_2_,local_a12);
      }
      iStack_c3c = iVar4 + 0x28;
      iStack_c38 = 0;
      iVar9 = (int)uVar15 >> 1;
      if (-1 < iVar9) {
        puVar12 = (undefined4 *)(puVar8 + iVar9 * 4);
        iVar9 = iVar9 + 1;
        do {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + -1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar13 = (uint)local_a12;
      }
      iVar9 = *(ushort *)(iVar4 + 0x2a) - 1;
      puStack_c48 = puVar8;
      if (-1 < iVar9) {
        do {
          (**(code **)(**(int **)(*(int *)(iVar4 + 0x2c) + iVar9 * 4) + 4))(&local_c58);
          uVar13 = local_c58._4_4_ ^ (uint)local_c58 ^ param_1;
          uVar13 = ((int)uVar13 >> 8) * 0x3ff + uVar13 & uVar15;
          sVar2 = *(short *)(puVar8 + uVar13 * 2);
          while (sVar2 != -1) {
            uVar13 = uVar13 + 1 & uVar15;
            sVar2 = *(short *)(puVar8 + uVar13 * 2);
          }
          *(short *)(puVar8 + uVar13 * 2) = (short)iVar9;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        uVar13 = CONCAT22(local_a10._0_2_,local_a12);
      }
      puStack_c18 = auStack_c14;
      uStack_c1c = 0x80;
      uStack_c1a = 0;
      uVar13 = uVar13 & 0xffff;
      local_4 = CONCAT31(local_4._1_3_,2);
      while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {
        iVar9 = *(int *)(*(int *)(local_a10 + uVar13 * 4) + 0x24);
        iStack_c4c = iVar9;
        if ((((*(byte *)(param_1 + 0x80) & 7) != 0) || ((*(byte *)(iVar9 + 0x80) & 7) != 0)) &&
           (*(int *)(param_1 + 0xa8) != *(int *)(iVar9 + 0xa8))) {
          iVar10 = (**(code **)*local_c2c)(param_1,iVar9);
          if (iVar10 != 0) {
            uVar14 = (iVar9 >> 8) * 0x3ff + iStack_c4c & uVar15;
            sVar2 = *(short *)(puVar8 + uVar14 * 2);
            while( true ) {
              iVar4 = (int)sVar2;
              if (iVar4 == -1) goto LAB_0053a950;
              piVar5 = *(int **)(*(int *)(local_c50 + 0x2c) + iVar4 * 4);
              local_c58._4_4_ = (uint)((ulonglong)local_c58 >> 0x20);
              local_c58 = (double)CONCAT44(local_c58._4_4_,piVar5);
              (**(code **)(*piVar5 + 4))(&iStack_c24);
              if ((iStack_c24 == iStack_c4c) || (iStack_c20 == iStack_c4c)) break;
              uVar14 = uVar14 + 1 & uVar15;
              sVar2 = *(short *)(puVar8 + uVar14 * 2);
            }
            if (iStack_c38 < iVar4) {
              uVar11 = FUN_0053aaf0(*(int **)(*(int *)(local_c50 + 0x2c) + iStack_c38 * 4));
              uVar11 = uVar11 & uVar15;
              sVar3 = *(short *)(puVar8 + uVar11 * 2);
              while (sVar3 != iStack_c38) {
                uVar11 = uVar11 + 1 & uVar15;
                sVar3 = *(short *)(puVar8 + uVar11 * 2);
              }
              *(short *)(puVar8 + uVar11 * 2) = sVar2;
              *(short *)(puVar8 + uVar14 * 2) = (short)iStack_c38;
              FUN_0053bb40((void *)(local_c50 + 0x28),iStack_c38,iVar4);
            }
            iStack_c38 = iStack_c38 + 1;
            iVar4 = local_c50;
            if ((uint)local_c58 == 0) {
LAB_0053a950:
              if (uStack_c1c <= uStack_c1a) {
                FUN_004f6060(&uStack_c1c);
              }
              *(int *)(puStack_c18 + (uint)uStack_c1a * 4) = iStack_c4c;
              uStack_c1a = uStack_c1a + 1;
              iVar4 = local_c50;
            }
          }
        }
      }
      iVar9 = *(ushort *)(iVar4 + 0x2a) - 1;
      if (iStack_c38 <= iVar9) {
        do {
          piVar5 = *(int **)(*(int *)(iVar4 + 0x2c) + iVar9 * 4);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x10))(1);
          }
          iVar9 = iVar9 + -1;
        } while (iStack_c38 <= iVar9);
      }
      uVar15 = (uint)uStack_c1a;
      do {
        uVar15 = uVar15 - 1;
        if ((int)uVar15 < 0) {
          if (puStack_c18 != auStack_c14) {
            if (puStack_c18 != (undefined1 *)0x0) {
              FUN_00559d4e(puStack_c18);
              puStack_c18 = (undefined1 *)0x0;
            }
            uStack_c1c = 0;
          }
          uStack_c1a = 0;
          if ((iStack_c40 != 0) && (puVar8 != (undefined1 *)0x0)) {
            FUN_00559d4e(puVar8);
          }
          if (local_a10 == local_a0c) {
            ExceptionList = local_c;
            return;
          }
          if (local_a10 == (undefined1 *)0x0) {
            ExceptionList = local_c;
            return;
          }
          FUN_00559d4e(local_a10);
          ExceptionList = local_c;
          return;
        }
        iVar4 = (int)local_c34;
        uVar6 = *(undefined4 *)(puStack_c18 + uVar15 * 4);
        uVar13 = (uint)*(ushort *)(*(int *)((int)local_c34 + 4) + 0x15a);
        do {
          uVar13 = uVar13 - 1;
          if ((int)uVar13 < 0) break;
          iVar9 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 4) + 0x15c) + uVar13 * 4) + 0xc)
                  )(param_1,uVar6);
        } while (iVar9 == 0);
      } while( true );
    }
    dVar1 = (double)*(float *)(iVar9 + 4);
    local_c34._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar6 = local_c34._4_4_;
    local_c34._0_4_ = SUB84(dVar1,0);
    uVar7 = (int)local_c34;
    local_c34 = dVar1;
    FUN_0050b9b0(*(void **)(*(int *)((int)this + 4) + 0x14),iVar4,uVar7,uVar6,dVar1,0);
    FUN_0050aac0(iVar4,(double *)(param_1 + 0x48),1e-19);
  }
  local_4 = 0xffffffff;
  FUN_0050bd30(&local_a14);
  ExceptionList = local_c;
  return;
}


