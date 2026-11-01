
/* ==== FUN_00520140 @ 00520140 ==== 
 * signature: undefined4 __thiscall FUN_00520140(void * this, void * param_1)
 * body: 00520140-005202eb
 */

undefined4 __thiscall FUN_00520140(void *this,void *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  double local_18;
  
  if (ABS(*(double *)((int)this + 0x10)) <= 9.99999993922529e-09) {
    if (ABS(*(double *)((int)this + 0x18)) <= 9.99999993922529e-09) {
      uVar4 = FUN_00520070(param_1,*(double **)((int)this + 8));
      return uVar4;
    }
    if (*(double *)((int)this + 0x18) <= 0.0) {
      dVar1 = *(double *)(*(int *)((int)this + 0xc) + 8);
      local_18 = *(double *)(*(int *)((int)this + 8) + 8);
    }
    else {
      dVar1 = *(double *)(*(int *)((int)this + 8) + 8);
      local_18 = *(double *)(*(int *)((int)this + 0xc) + 8);
    }
    dVar2 = *(double *)(*(int *)((int)param_1 + 8) + 8);
    dVar3 = *(double *)(*(int *)((int)param_1 + 0xc) + 8);
    if ((dVar2 <= dVar1 + 9.99999993922529e-09) && (dVar3 <= dVar1 + 9.99999993922529e-09)) {
      return 0;
    }
    if ((local_18 - 9.99999993922529e-09 <= dVar2) && (local_18 - 9.99999993922529e-09 <= dVar3)) {
      return 0;
    }
  }
  else {
    if (*(double *)((int)this + 0x10) <= 0.0) {
      dVar1 = **(double **)((int)this + 0xc);
      local_18 = **(double **)((int)this + 8);
    }
    else {
      dVar1 = **(double **)((int)this + 8);
      local_18 = **(double **)((int)this + 0xc);
    }
    if ((**(double **)((int)param_1 + 8) <= dVar1 + 9.99999993922529e-09) &&
       (**(double **)((int)param_1 + 0xc) <= dVar1 + 9.99999993922529e-09)) {
      return 0;
    }
    if ((local_18 - 9.99999993922529e-09 <= **(double **)((int)param_1 + 8)) &&
       (local_18 - 9.99999993922529e-09 <= **(double **)((int)param_1 + 0xc))) {
      return 0;
    }
  }
  return 1;
}


