
/* ==== FUN_0055f313 @ 0055f313 ==== 
 * signature: float10 __cdecl FUN_0055f313(uint param_1, uint param_2, undefined8 param_3, double param_4, uint param_5)
 * body: 0055f313-0055f3aa
 */

float10 __cdecl
FUN_0055f313(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_0055f65e(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_0055f3ab(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_0055f948((byte)param_1);
  if ((DAT_005c94c0 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_0055f875(iVar2,param_2);
    return fVar3;
  }
  FUN_0055f8fd(iVar2);
  FUN_0055fae8();
  return (float10)param_4;
}


