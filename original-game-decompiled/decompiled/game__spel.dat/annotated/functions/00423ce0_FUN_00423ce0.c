
/* ==== FUN_00423ce0 @ 00423ce0 ==== 
 * signature: undefined __fastcall FUN_00423ce0(undefined4 * param_1)
 * body: 00423ce0-00423e33
 */

void __fastcall FUN_00423ce0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)*param_1)();
  FUN_004c3fa0((byte *)s_Number_of_vehicles___d_00595990);
  iVar1 = (**(code **)*param_1)();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_004c3fa0((byte *)s_Vehicle__d_005959a8);
      FUN_004c3fa0((byte *)s_RefName__s_005959b4);
      FUN_004c3fa0((byte *)s_AnimName__s_005959c0);
      FUN_004c3fa0((byte *)s_DriverName_s_005959d0);
      FUN_004c3fa0((byte *)s_SoundType__s_005959e0);
      FUN_004c3fa0((byte *)s_Mass___2f_005959f0);
      FUN_004c3fa0((byte *)s_CarType__d_005959fc);
      FUN_004c3fa0((byte *)s_Price_d_00595a08);
      FUN_004c3fa0((byte *)s_DynamicsType__f_00595a14);
      FUN_004c3fa0((byte *)s_DamageModel__s_00595a28);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


