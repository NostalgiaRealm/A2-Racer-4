
/* ==== FUN_005202f0 @ 005202f0 ==== 
 * signature: bool __thiscall FUN_005202f0(void * this, void * param_1)
 * body: 005202f0-0052043e
 */

bool __thiscall FUN_005202f0(void *this,void *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  double local_20;
  
  dVar3 = *(double *)((int)this + 0x18) * *(double *)((int)param_1 + 0x10) -
          *(double *)((int)this + 0x10) * *(double *)((int)param_1 + 0x18);
  if (9.999999717180685e-10 <= ABS(dVar3)) {
    pdVar1 = *(double **)((int)this + 8);
    if ((((pdVar1 != *(double **)((int)param_1 + 0xc)) &&
         (pdVar2 = *(double **)((int)param_1 + 8), pdVar1 != pdVar2)) &&
        (*(double **)((int)this + 0xc) != pdVar2)) &&
       (*(double **)((int)this + 0xc) != *(double **)((int)param_1 + 0xc))) {
      if (dVar3 <= 0.0) {
        local_20 = 0.0;
        dVar4 = dVar3;
      }
      else {
        dVar4 = 0.0;
        local_20 = dVar3;
      }
      dVar3 = *(double *)((int)param_1 + 0x10) * (pdVar2[1] - pdVar1[1]) -
              *(double *)((int)param_1 + 0x18) * (*pdVar2 - *pdVar1);
      if (((dVar4 <= dVar3) && (dVar3 <= local_20)) &&
         ((dVar3 = *(double *)((int)this + 0x10) * (pdVar2[1] - pdVar1[1]) -
                   *(double *)((int)this + 0x18) * (*pdVar2 - *pdVar1), dVar4 <= dVar3 &&
          (dVar3 <= local_20)))) {
        return true;
      }
    }
  }
  else {
    fVar6 = FUN_0051ffe0((int)this,*(double **)((int)param_1 + 8));
    if (ABS(fVar6) < (float10)9.99999949475751e-09) {
      iVar5 = FUN_00520140(this,param_1);
      return iVar5 != 0;
    }
  }
  return false;
}


