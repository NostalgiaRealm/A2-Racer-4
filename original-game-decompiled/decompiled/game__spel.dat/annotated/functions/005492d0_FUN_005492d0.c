
/* ==== FUN_005492d0 @ 005492d0 ==== 
 * signature: undefined4 __thiscall FUN_005492d0(void * this, int param_1)
 * body: 005492d0-005494a3
 */

undefined4 __thiscall FUN_005492d0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  float local_10;
  
  iVar8 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    if (iVar8 < *(short *)(param_1 + 0x40)) {
LAB_00549477:
      fVar10 = (float10)0.0;
    }
    else {
      dVar3 = *(double *)(*(int *)((int)this + 0x18) + iVar8 * 8);
      if (dVar3 <= 0.0) {
        if (dVar3 == 0.0) {
          puVar4[0x19] = 0;
          goto LAB_00549477;
        }
        if ((int)puVar4[0x19] < 0) {
          puVar4[0x19] = 0;
        }
        iVar5 = puVar4[0x19];
        puVar4[0x19] = iVar5 + 1;
        if (9 < iVar5 + 1) {
          puVar4[0x19] = 0;
        }
      }
      else if ((int)puVar4[0x19] < 0) {
        puVar4[0x19] = puVar4[0x19] + -1;
      }
      else {
        puVar4[0x19] = 0xffffffff;
      }
      pfVar6 = (float *)puVar4[0x10];
      fVar7 = pfVar6[0x1e];
      if (fVar7 != 0.0) {
        local_28 = pfVar6[0x30] * *(float *)((int)fVar7 + 0x34);
        local_24 = pfVar6[0x31] * *(float *)((int)fVar7 + 0x38);
        local_20 = pfVar6[0x32] * *(float *)((int)fVar7 + 0x3c);
        FUN_004fe070((void *)((int)fVar7 + 0x74),(void *)((int)fVar7 + 0x74),&local_28,-dVar3);
        FUN_004fe070((void *)((int)fVar7 + 0x84),(void *)((int)fVar7 + 0x84),pfVar6,
                     (double)-(*(float *)((int)fVar7 + 0x40) * (float)dVar3));
      }
      fVar10 = (float10)dVar3;
      fVar7 = pfVar6[0x1f];
      if (fVar7 != 0.0) {
        local_14 = pfVar6[0x35] * *(float *)((int)fVar7 + 0x38);
        local_10 = pfVar6[0x36] * *(float *)((int)fVar7 + 0x3c);
        *(float *)((int)fVar7 + 0x74) =
             (float)((float10)pfVar6[0x34] * (float10)*(float *)((int)fVar7 + 0x34) * fVar10 +
                    (float10)*(float *)((int)fVar7 + 0x74));
        *(float *)((int)fVar7 + 0x78) =
             (float)((float10)local_14 * fVar10 + (float10)*(float *)((int)fVar7 + 0x78));
        *(float *)((int)fVar7 + 0x7c) =
             (float)((float10)local_10 * fVar10 + (float10)*(float *)((int)fVar7 + 0x7c));
        fVar9 = (float10)*(float *)((int)fVar7 + 0x40) * fVar10;
        fVar1 = pfVar6[1];
        fVar2 = pfVar6[2];
        *(float *)((int)fVar7 + 0x84) =
             (float)((float10)*pfVar6 * fVar9 + (float10)*(float *)((int)fVar7 + 0x84));
        *(float *)((int)fVar7 + 0x88) =
             (float)((float10)fVar1 * fVar9 + (float10)*(float *)((int)fVar7 + 0x88));
        *(float *)((int)fVar7 + 0x8c) =
             (float)((float10)fVar2 * fVar9 + (float10)*(float *)((int)fVar7 + 0x8c));
      }
      if (fVar10 < (float10)0.0) goto LAB_00549477;
    }
    iVar8 = iVar8 + 1;
    puVar4[0x15] = (float)(fVar10 * (float10)*(double *)(*(int *)((int)this + 0x2c) + 8));
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}


