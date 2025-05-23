# SPDX-FileCopyrightText: 2023-2025 Espressif Systems (Shanghai) CO LTD
# SPDX-License-Identifier: CC0-1.0
import pytest
from pytest_embedded import Dut
from pytest_embedded_idf.utils import idf_parametrize


@pytest.mark.generic
@idf_parametrize('target', ['esp32p4'], indirect=['target'])
def test_ipc_isr_riscv(dut: Dut) -> None:
    dut.expect_exact('example: Start')
    dut.expect_exact('example: MSTATUS = 0x11880')
    dut.expect_exact('example: in[0] = 0x1')
    dut.expect_exact('example: in[1] = 0x2')
    dut.expect_exact('example: in[2] = 0x3')
    dut.expect_exact('example: out[0] = (in[0] | in[1] | in[2]) = 0x3')
    dut.expect_exact('example: out[1] = (in[0] + in[1] + in[2]) = 0x6')
    dut.expect_exact('example: out[2] = MCAUSE of other cpu = 0xb800002c')
    dut.expect_exact('example: out[3] = MSTATUS of other cpu = 0x11880')
    dut.expect_exact('example: End')
