
/* ==== FUN_0050e930 @ 0050e930 ==== 
 * signature: undefined __thiscall FUN_0050e930(void * this, double * param_1)
 * body: 0050e930-0050f211
 */

void __thiscall FUN_0050e930(void *this,double *param_1)

{
  void *pvVar1;
  float fVar2;
  double dVar3;
  int *piVar4;
  void *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *this_01;
  double *pdVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  int local_4ac;
  int local_494;
  float local_480;
  float fStack_47c;
  float local_478;
  undefined8 local_46c;
  double local_464;
  double local_45c;
  float local_44c;
  float local_448;
  float local_444;
  float local_440;
  float local_438;
  float local_434;
  float local_430;
  undefined8 local_428;
  float local_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  float local_3e8;
  float local_3e4;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  double local_3a8 [4];
  double local_388 [12];
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_308 [60];
  undefined1 local_2cc [56];
  undefined1 local_294 [48];
  undefined1 local_264 [52];
  double local_230;
  double local_228;
  double local_208;
  float local_1d0;
  float local_1cc;
  double local_108 [16];
  double local_88 [16];
  
  local_4ac = 0;
  piVar4 = *(int **)((int)this + 0x98);
  this_00 = *(void **)(*piVar4 + 0xa4);
  local_480 = *(float *)(param_1 + 1);
  fStack_47c = *(float *)((int)param_1 + 0xc);
  if (*(short *)((int)this + 0x9e) != 0) {
    do {
      piVar12 = *(int **)(*(int *)((int)this + 0xa0) + local_4ac * 4);
      iVar11 = *(int *)((int)this + 0x80);
      iVar5 = *(int *)(*piVar12 + 0xa4);
      local_3c8 = *(double *)(iVar5 + 0x128 + iVar11 * 8);
      local_3c0 = *(undefined8 *)(iVar5 + 0x148 + iVar11 * 8);
      local_3b8 = *(undefined8 *)(iVar5 + 0x168 + iVar11 * 8);
      FUN_004faf30((void *)((int)this_00 + 0x128),(double *)&local_3c8,local_3a8);
      this_01 = piVar12 + 2;
      FUN_004faf30(this_01,local_3a8,(double *)&local_46c);
      iVar11 = *(int *)((int)this + 0x80);
      fVar2 = *(float *)(iVar5 + 0x94 + iVar11 * 4);
      dVar3 = *param_1;
      iVar6 = *(int *)((int)this + 0x88);
      *(undefined4 *)(&local_408 + iVar11) = 0;
      fVar15 = (float10)fVar2 * (float10)dVar3 * (float10)0.44999998807907104;
      *(undefined4 *)((int)&local_408 + iVar11 * 8 + 4) = 0;
      iVar7 = *(int *)((int)this + 0x84);
      fVar16 = fVar15 * fVar15 * fVar15;
      dVar3 = (double)((fVar16 * fVar15 * fVar15 * (float10)0.008333334 +
                       (fVar15 - fVar16 * (float10)0.16666667)) *
                      (float10)*(float *)((int)this + 0x8c));
      fVar15 = fVar15 * fVar15;
      fVar15 = fVar15 * fVar15 * (float10)0.041666668 + ((float10)1.0 - fVar15 * (float10)0.5);
      fVar16 = (float10)fpatan((float10)dVar3 * (float10)(double)(&local_46c)[iVar7] +
                               fVar15 * (float10)(double)(&local_46c)[iVar6],
                               (float10)(double)(&local_46c)[iVar11]);
      (&local_408)[iVar7] = (double)-(fVar16 * (float10)*(float *)((int)this + 0x8c));
      fVar15 = (float10)fpatan(fVar15 * (float10)(double)(&local_46c)[iVar7] -
                               (float10)dVar3 * (float10)(double)(&local_46c)[iVar6],
                               (float10)(double)(&local_46c)[iVar11]);
      (&local_408)[iVar6] = (double)(fVar15 * (float10)*(float *)((int)this + 0x8c));
      local_448 = (float)*(double *)(this_01 + iVar7 * 2);
      local_444 = (float)*(double *)(piVar12 + iVar7 * 2 + 10);
      local_440 = (float)*(double *)(piVar12 + iVar7 * 2 + 0x12);
      FUN_004fae60((void *)((int)this_00 + 0x128),&local_448,&local_3d8);
      iVar11 = *(int *)((int)this + 0x88);
      local_438 = (float)*(double *)(this_01 + iVar11 * 2);
      local_434 = (float)*(double *)(piVar12 + iVar11 * 2 + 10);
      local_430 = (float)*(double *)(piVar12 + iVar11 * 2 + 0x12);
      FUN_004fae60((void *)((int)this_00 + 0x128),&local_438,&local_3e8);
      FUN_00402d00(local_2cc,0x10,3,FUN_0043e110);
      FUN_00402d00(local_294,0x10,3,FUN_0043e110);
      FUN_00402d00(local_264,0x10,3,FUN_0043e110);
      FUN_00402d00(&local_230,0x20,3,FUN_0043e110);
      FUN_005434d0(local_308,(int)this_00,iVar5,&local_3d8,&local_3e8,0);
      fVar15 = (float10)local_230 * (float10)local_208 - (float10)local_228 * (float10)local_228;
      if (fVar15 * fVar15 < (float10)1e-38) {
        FUN_0055ab10((byte *)s_do_constraint_system__Couldn_t_i_005b9984);
        return;
      }
      fVar15 = (float10)1.0 / fVar15;
      fVar16 = (float10)(double)(&local_408)[*(int *)((int)this + 0x84)] * (float10)param_1[1] -
               (float10)local_1d0;
      fVar17 = (float10)(double)(&local_408)[*(int *)((int)this + 0x88)] * (float10)param_1[1] -
               (float10)local_1cc;
      local_428._0_4_ =
           (float)(fVar16 * (float10)(double)((float10)local_208 * fVar15) +
                  fVar17 * (float10)(double)-((float10)local_228 * fVar15));
      local_428._4_4_ =
           (float)(fVar16 * (float10)(double)-((float10)local_228 * fVar15) +
                  fVar17 * fVar15 * (float10)local_230);
      FUN_005437a0(local_308,(int)this_00,iVar5,(float *)&local_428);
      local_4ac = local_4ac + 1;
    } while (local_4ac < (int)(uint)*(ushort *)((int)this + 0x9e));
  }
  fVar2 = (float)*param_1;
  puVar13 = *(undefined4 **)((int)this + 0x1c);
  bVar10 = false;
  local_494 = 0;
  local_4ac = 0;
  local_44c = fVar2;
  if (*(short *)((int)this + 0x9e) != 0) {
    do {
      piVar12 = *(int **)(*(int *)((int)this + 0xa0) + local_4ac * 4);
      local_448 = (float)*(double *)(piVar12 + 0x1a);
      local_444 = (float)*(double *)(piVar12 + 0x1c);
      iVar11 = *(int *)(*piVar12 + 0xa4);
      local_440 = (float)*(double *)(piVar12 + 0x1e);
      pvVar1 = (void *)((int)this_00 + 0x128);
      FUN_004fab40(pvVar1,(double *)(iVar11 + 0x188),(float *)&local_3c8);
      FUN_004fafa0(pvVar1,(float *)(iVar11 + 0xa4),&local_438);
      FUN_004f3f20(this_00,&local_448,(float *)&local_408);
      FUN_004fafa0(pvVar1,(float *)&local_408,&local_3d8);
      fVar15 = (float10)local_44c;
      local_3e8 = (float)((float10)local_438 * fVar15 + (float10)(float)local_3c8);
      local_3e4 = (float)((float10)local_434 * fVar15 + (float10)local_3c8._4_4_);
      local_428._4_4_ = local_3d4 * fVar2 + local_444;
      local_420 = local_3d0 * fVar2 + local_440;
      local_464 = (double)(local_3e4 - local_428._4_4_) * (double)CONCAT44(fStack_47c,local_480);
      fVar15 = ((fVar15 * (float10)local_430 + (float10)(float)local_3c0) - (float10)local_420) *
               (float10)(double)CONCAT44(fStack_47c,local_480);
      local_46c = (double)(local_3e8 - (local_3d8 * fVar2 + local_448)) *
                  (double)CONCAT44(fStack_47c,local_480);
      local_45c = (double)fVar15;
      if ((float10)*(float *)((int)this + 0x7c) * (float10)*(float *)((int)this + 0x7c) <
          (float10)local_46c * (float10)local_46c +
          (float10)local_464 * (float10)local_464 + fVar15 * fVar15) {
        local_494 = local_494 + 1;
        *(undefined4 *)((int)this + 0x78) = 10;
        if (*(int *)((int)this + 0x40) == 0) {
          bVar10 = true;
          break;
        }
      }
      iVar11 = *(int *)((int)this + 0x80);
      *puVar13 = *(undefined4 *)(&local_46c + iVar11);
      puVar13[1] = *(undefined4 *)((int)&local_46c + iVar11 * 8 + 4);
      iVar11 = *(int *)((int)this + 0x88);
      puVar13[2] = *(undefined4 *)(&local_46c + iVar11);
      puVar13[3] = *(undefined4 *)((int)&local_46c + iVar11 * 8 + 4);
      local_4ac = local_4ac + 1;
      puVar13 = puVar13 + 4;
    } while (local_4ac < (int)(uint)*(ushort *)((int)this + 0x9e));
    if (local_494 != 0) goto LAB_0050ef46;
  }
  if ((*(int *)((int)this + 0x40) == 1) &&
     (iVar11 = *(int *)((int)this + 0x78) + -1, *(int *)((int)this + 0x78) = iVar11, iVar11 < 0)) {
    iVar11 = 0;
    if (*(short *)((int)this + 0x9e) != 0) {
      piVar12 = (int *)((int)this + 0x44);
      do {
        if ((int *)*piVar12 != (int *)0x0) {
          (**(code **)(*(int *)*piVar12 + 0x18))(1);
        }
        *piVar12 = 0;
        iVar11 = iVar11 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar11 < (int)(uint)*(ushort *)((int)this + 0x9e));
    }
    *(undefined4 *)((int)this + 0x40) = 0;
  }
LAB_0050ef46:
  if (bVar10) {
    iVar11 = 0;
    if (*(short *)((int)this + 0x9e) != 0) {
      puVar13 = (undefined4 *)((int)this + 0x44);
      do {
        puVar8 = *(undefined4 **)(*(int *)((int)this + 0xa0) + iVar11 * 4);
        FUN_004f2ab0((void *)*piVar4,local_88);
        iVar5 = *(int *)(*piVar4 + 0xa4);
        FUN_004f2b10((void *)*puVar8,local_108);
        local_3f8 = puVar8[0x1e];
        local_3f4 = puVar8[0x1f];
        local_400 = *(undefined8 *)(puVar8 + 0x1c);
        local_408 = *(double *)(puVar8 + 0x1a);
        FUN_004fad20((void *)(iVar5 + 0x128),(double *)&local_408,local_3a8);
        FUN_004fabb0(local_108,local_3a8,(double *)&local_428);
        local_46c = 0.0;
        local_464 = 0.0;
        local_45c = 0.0;
        FUN_004f5560((int)local_308);
        pvVar1 = (void *)*puVar8;
        pvVar9 = (void *)*piVar4;
        FUN_004fa040((undefined4 *)local_388);
        local_328 = CONCAT44(local_428._4_4_,(float)local_428);
        local_320 = CONCAT44(uStack_41c,local_420);
        local_318 = local_418;
        FUN_004f5680(local_308,pvVar1,&local_46c,(undefined4 *)0x0,3,0,pvVar9,local_388);
        piVar12 = FUN_004f5a10((int)local_308);
        iVar11 = iVar11 + 1;
        *puVar13 = piVar12;
        puVar13 = puVar13 + 1;
      } while (iVar11 < (int)(uint)*(ushort *)((int)this + 0x9e));
    }
    *(undefined4 *)((int)this + 0x40) = 1;
  }
  FUN_00543fc0((int)this + 8);
  if (*(int *)((int)this + 0x40) == 0) {
    pdVar14 = *(double **)((int)this + 0x20);
    iVar11 = 0;
    if (*(short *)((int)this + 0x9e) != 0) {
      do {
        piVar4 = *(int **)(*(int *)((int)this + 0xa0) + iVar11 * 4);
        pvVar1 = *(void **)(*piVar4 + 0xa4);
        iVar5 = *(int *)((int)this + 0x84);
        *(float *)((int)&local_428 + *(int *)((int)this + 0x80) * 4) = (float)*pdVar14;
        dVar3 = pdVar14[1];
        iVar6 = *(int *)((int)this + 0x88);
        *(undefined4 *)((int)&local_428 + iVar5 * 4) = 0;
        *(float *)((int)&local_428 + iVar6 * 4) = (float)dVar3;
        FUN_004fae60((void *)((int)this_00 + 0x128),(float *)&local_428,&local_480);
        pdVar14 = pdVar14 + 2;
        FUN_004fad20((void *)((int)this_00 + 0x128),(double *)(piVar4 + 0x1a),local_3a8);
        FUN_004f4050(this_00,local_3a8,&local_480);
        fStack_47c = fStack_47c * -1.0;
        local_478 = local_478 * -1.0;
        local_480 = local_480 * -1.0;
        FUN_004f4050(pvVar1,(double *)((int)pvVar1 + 0x188),&local_480);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)*(ushort *)((int)this + 0x9e));
    }
  }
  return;
}


