
/* ==== __break @ 0055995f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055995f-0055995f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


