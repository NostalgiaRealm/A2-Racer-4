
/* ==== FUN_004f9e40 @ 004f9e40 ==== 
 * signature: undefined4 __thiscall FUN_004f9e40(void * this, double param_1)
 * body: 004f9e40-004fa009
 */

undefined4 __thiscall FUN_004f9e40(void *this,double param_1)

{
  double dVar1;
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  local_68 = *(double *)((int)this + 0x28) * *(double *)((int)this + 0x50) -
             *(double *)((int)this + 0x30) * *(double *)((int)this + 0x48);
  local_60 = *(double *)((int)this + 0x40) * *(double *)((int)this + 0x30) -
             *(double *)((int)this + 0x20) * *(double *)((int)this + 0x50);
  local_58 = *(double *)((int)this + 0x20) * *(double *)((int)this + 0x48) -
             *(double *)((int)this + 0x40) * *(double *)((int)this + 0x28);
  dVar1 = local_68 * *(double *)this +
          local_60 * *(double *)((int)this + 8) + local_58 * *(double *)((int)this + 0x10);
  if (ABS(dVar1) < param_1) {
    return 0;
  }
  dVar1 = 1.0 / dVar1;
  local_68 = local_68 * dVar1;
  local_40 = (*(double *)this * *(double *)((int)this + 0x50) -
             *(double *)((int)this + 0x10) * *(double *)((int)this + 0x40)) * dVar1;
  local_38 = (*(double *)((int)this + 8) * *(double *)((int)this + 0x40) -
             *(double *)this * *(double *)((int)this + 0x48)) * dVar1;
  local_48 = (*(double *)((int)this + 0x10) * *(double *)((int)this + 0x48) -
             *(double *)((int)this + 8) * *(double *)((int)this + 0x50)) * dVar1;
  local_20 = (*(double *)((int)this + 0x10) * *(double *)((int)this + 0x20) -
             *(double *)((int)this + 0x30) * *(double *)this) * dVar1;
  local_18 = (*(double *)((int)this + 0x28) * *(double *)this -
             *(double *)((int)this + 8) * *(double *)((int)this + 0x20)) * dVar1;
  local_28 = (*(double *)((int)this + 8) * *(double *)((int)this + 0x30) -
             *(double *)((int)this + 0x28) * *(double *)((int)this + 0x10)) * dVar1;
  *(double *)this = local_68;
  *(double *)((int)this + 0x20) = local_60 * dVar1;
  *(double *)((int)this + 0x40) = local_58 * dVar1;
  FUN_004fb0f0(this,1,&local_48);
  FUN_004fb0f0(this,2,&local_28);
  FUN_004faec0(this,(double *)((int)this + 0x60),&local_68);
  FUN_004fa070((double *)((int)this + 0x60),&local_68);
  return 1;
}


