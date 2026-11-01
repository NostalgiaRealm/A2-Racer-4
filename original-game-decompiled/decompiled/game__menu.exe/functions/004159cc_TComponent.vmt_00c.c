
/* ==== TComponent.vmt_00c @ 004159cc ==== 
 * signature: undefined __register TComponent.vmt_00c(int param_1)
 * body: 004159cc-004159d5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponent_vmt_00c(int param_1)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffe;
  return;
}


