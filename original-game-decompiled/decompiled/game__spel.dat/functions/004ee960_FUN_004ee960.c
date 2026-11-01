
/* ==== FUN_004ee960 @ 004ee960 ==== 
 * signature: undefined __fastcall FUN_004ee960(void * param_1)
 * body: 004ee960-004eea13
 */

void __fastcall FUN_004ee960(void *param_1)

{
  float fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = FUN_004ee700((int)param_1);
  fVar1 = (float)fVar2;
  local_4 = (float)*(int *)((int)param_1 + 0xe0) * fVar1;
  FUN_004ee6d0(&local_4,(float)*(int *)((int)param_1 + 0x114),(float)*(int *)((int)param_1 + 0x118))
  ;
  local_8 = (float)*(int *)((int)param_1 + 0xe4) * fVar1;
  FUN_004ee6d0(&local_8,(float)*(int *)((int)param_1 + 0x11c),(float)*(int *)((int)param_1 + 0x120))
  ;
  local_c = (float)*(int *)((int)param_1 + 0xe8) * fVar1;
  FUN_004ee6d0(&local_c,(float)*(int *)((int)param_1 + 0x124),(float)*(int *)((int)param_1 + 0x128))
  ;
  FUN_004ee8a0(param_1,local_4,local_8,local_c);
  return;
}


