
/* ==== FUN_004fecd0 @ 004fecd0 ==== 
 * signature: undefined __thiscall FUN_004fecd0(void * this, int * param_1)
 * body: 004fecd0-004ff0fa
 */

void __thiscall FUN_004fecd0(void *this,int *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float *pfVar5;
  double *pdVar6;
  uint *puVar7;
  uint *puVar8;
  int local_84;
  int local_80;
  double local_78;
  double local_70;
  double local_68;
  float local_58;
  float local_54;
  float local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  double local_28 [4];
  
  iVar4 = (int)(short)param_1[3];
  if (iVar4 == 2) {
    puVar8 = (uint *)(param_1 + 5);
    FUN_00509c90(puVar8,param_1,&local_48);
    pfVar5 = (float *)((*puVar8 & 0xffff) * 0x10 + *param_1 + (int)param_1);
    dVar2 = (double)*pfVar5 * local_48 +
            (double)pfVar5[1] * local_40 +
            (double)pfVar5[2] * (double)CONCAT44(local_38._4_4_,(undefined4)local_38);
    dVar3 = (local_48 * *(double *)this +
            local_40 * *(double *)((int)this + 8) +
            (double)CONCAT44(local_38._4_4_,(undefined4)local_38) * *(double *)((int)this + 0x10)) -
            dVar2;
    dVar2 = (local_48 * *(double *)((int)this + 0x30) +
            local_40 * *(double *)((int)this + 0x38) +
            (double)CONCAT44(local_38._4_4_,(undefined4)local_38) * *(double *)((int)this + 0x40)) -
            dVar2;
    if (dVar2 * dVar3 < 0.0) {
      dVar2 = dVar3 / (dVar3 - dVar2);
      FUN_004f9360(&local_78,this,(double *)((int)this + 0x30),dVar2);
      FUN_005094e0(param_1,(uint)puVar8,&local_78,(int)&local_58);
      if ((((uint)local_54 | (uint)local_50 | (uint)local_58) & 0x80000000) == 0) {
        if (dVar3 < 0.0) {
          local_40 = local_40 * -1.0;
          local_38 = (double)CONCAT44(local_38._4_4_,(undefined4)local_38) * -1.0;
          local_48 = local_48 * -1.0;
        }
        FUN_004f9870(&local_48);
        (**(code **)**(undefined4 **)((int)this + 0x60))
                  (*(undefined4 *)((int)this + 100),param_1,param_1 + 4,
                   (double)(*(float *)((int)this + 0x68) * (float)dVar2),&local_48);
        return;
      }
    }
  }
  else {
    local_58 = *(float *)((int)this + 0x50);
    local_54 = *(float *)((int)this + 0x54);
    local_50 = *(float *)((int)this + 0x58);
    local_84 = 0;
    if (0 < iVar4) {
      puVar8 = (uint *)(param_1 + 5);
      do {
        FUN_00509c90(puVar8,param_1,&local_78);
        if (local_58 * (float)local_78 + local_54 * (float)local_70 + local_50 * (float)local_68 <=
            -1e-12) {
          pfVar5 = (float *)((*puVar8 & 0xffff) * 0x10 + *param_1 + (int)param_1);
          dVar2 = (double)*pfVar5 * local_78 +
                  (double)pfVar5[1] * local_70 + (double)pfVar5[2] * local_68;
          if (0.0 < (local_78 * *(double *)this +
                    local_70 * *(double *)((int)this + 8) + local_68 * *(double *)((int)this + 0x10)
                    ) - dVar2) {
            if (0.0 < (local_78 * *(double *)((int)this + 0x30) +
                      local_70 * *(double *)((int)this + 0x38) +
                      local_68 * *(double *)((int)this + 0x40)) - dVar2) {
              return;
            }
            if (puVar8 == (uint *)0x0) {
              return;
            }
            local_80 = (short)param_1[3] + -1;
            if (local_80 < 0) {
              return;
            }
            do {
              FUN_00509c90(puVar8,param_1,&local_78);
              if (-1e-12 < local_58 * (float)local_78 +
                           local_54 * (float)local_70 + local_50 * (float)local_68) {
                return;
              }
              pfVar5 = (float *)((*puVar8 & 0xffff) * 0x10 + *param_1 + (int)param_1);
              dVar2 = (double)*pfVar5 * local_78 +
                      (double)pfVar5[1] * local_70 + (double)pfVar5[2] * local_68;
              dVar3 = (local_78 * *(double *)this +
                      local_70 * *(double *)((int)this + 8) +
                      local_68 * *(double *)((int)this + 0x10)) - dVar2;
              dVar2 = (local_78 * *(double *)((int)this + 0x30) +
                      local_70 * *(double *)((int)this + 0x38) +
                      local_68 * *(double *)((int)this + 0x40)) - dVar2;
              if (0.0 <= dVar2 * dVar3) {
                return;
              }
              dVar3 = dVar3 / (dVar3 - dVar2);
              FUN_004f9360(local_28,this,(double *)((int)this + 0x30),dVar3);
              FUN_005094e0(param_1,(uint)puVar8,local_28,(int)&local_48);
              iVar4 = 0;
              pdVar6 = &local_48;
              puVar7 = puVar8;
              while( true ) {
                if (2 < iVar4) {
                  fVar1 = *(float *)((int)this + 0x68);
                  FUN_004f9870(&local_78);
                  (**(code **)**(undefined4 **)((int)this + 0x60))
                            (*(undefined4 *)((int)this + 100),param_1,(uint)puVar8 & 0xfffffff0,
                             (double)(fVar1 * (float)dVar3),&local_78);
                  return;
                }
                if (*(float *)pdVar6 <= 0.0) break;
                puVar7 = (uint *)((int)puVar7 + *(int *)(&DAT_005b99bc + ((uint)puVar7 & 0xc)));
                iVar4 = iVar4 + 1;
                pdVar6 = (double *)((int)pdVar6 + 4);
              }
              local_80 = local_80 + -1;
              puVar8 = puVar7 + ((int)(*puVar7 << 1) >> 0x11);
            } while (-1 < local_80);
            return;
          }
        }
        local_84 = local_84 + 1;
        puVar8 = puVar8 + 4;
        if (iVar4 <= local_84) {
          return;
        }
      } while( true );
    }
  }
  return;
}


