# -*- Mode: python; py-indent-offset: 4; indent-tabs-mode: nil; coding: utf-8; -*-

# def options(opt):
#     pass

# def configure(conf):
#     conf.check_nonfatal(header_name='stdint.h', define_name='HAVE_STDINT_H')

def build(bld):
    module = bld.create_ns3_module('location-service', ['network'])
    module.source = [
        'model/location-service.cc',
        'model/god.cc',
        ]

    headers = bld(features='ns3header')
    headers.module = 'location-service'
    headers.source = [
        'model/location-service.h',
        'model/god.h',
        ]

    # bld.ns3_python_bindings()

