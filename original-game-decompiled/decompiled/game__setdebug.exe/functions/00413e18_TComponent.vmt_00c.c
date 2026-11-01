
/* ==== TComponent.vmt_00c @ 00413e18 ==== 
 * signature: undefined __register TComponent.vmt_00c(int param_1)
 * body: 00413e18-00413e21
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponent_vmt_00c(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
  return;
}


