
/* ==== FUN_0048ee50 @ 0048ee50 ==== 
 * signature: undefined __fastcall FUN_0048ee50(void * param_1)
 * body: 0048ee50-0048ef1d
 */

void __fastcall FUN_0048ee50(void *param_1)

{
  float local_34;
  float local_30 [3];
  float local_24 [3];
  float local_18 [3];
  float local_c [3];
  
  FUN_0048f0d0(local_30,local_18);
  FUN_0048f140(local_24,local_c);
  local_34 = 1.2;
  FUN_0049cb60((void *)((int)param_1 + 0x38),local_30,local_18,&local_34);
  local_34 = 1.2;
  FUN_0049cb60((void *)((int)param_1 + 0xb0),local_24,local_c,&local_34);
  FUN_0049ca90((int)param_1 + 0x128);
  FUN_0049cb00((int)param_1 + 0x1a0);
  FUN_0048ef80(param_1,1);
  FUN_0048f040(param_1,1);
  FUN_0047bc50(*(void **)((int)param_1 + 0x2c),local_30);
  FUN_0047bc50(*(void **)((int)param_1 + 0x28),local_24);
  *(undefined4 *)((int)param_1 + 0x30) = 0x1000001;
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    *(undefined4 *)((int)param_1 + 0x34) = 3;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x34) = 0x1000001;
  return;
}


